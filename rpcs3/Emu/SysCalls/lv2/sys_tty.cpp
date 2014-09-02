#include "stdafx.h"
#include "Utilities/Log.h"
#include "Emu/Memory/Memory.h"
#include "Emu/System.h"
#include "Emu/SysCalls/SysCalls.h"

#include "sys_tty.h"

SysCallBase sys_tty("sys_tty");

s32 sys_tty_read(u32 ch, u64 buf_addr, u32 len, u64 preadlen_addr)
{
	sys_tty.Error("sys_tty_read(ch=%d, buf_addr=%llx, len=%d, preadlen_addr=0x%llx)", ch, buf_addr, len, preadlen_addr);

	// We currently do not support reading from the Console
	Memory.Write32(preadlen_addr, len);
	Emu.Pause();

	return CELL_OK;
}

s32 sys_tty_write(u32 ch, u64 buf_addr, u32 len, u64 pwritelen_addr)
{
	sys_tty.Log("sys_tty_write(ch=%d, buf_addr=%llx, len=%d, preadlen_addr=0x%llx)", ch, buf_addr, len, pwritelen_addr);

	if(ch > 15 || (s32)len <= 0) return CELL_EINVAL;
	
	if (ch == SYS_TTYP_PPU_STDOUT || ch == SYS_TTYP_SPU_STDOUT || (ch >= SYS_TTYP_USER1 && ch <= SYS_TTYP_USER13)) {
		LOG_NOTICE(TTY, "%s", Memory.ReadString(buf_addr, len).c_str());
	}
	if (ch == SYS_TTYP_PPU_STDERR) {
		LOG_ERROR(TTY, "%s", Memory.ReadString(buf_addr, len).c_str());
	}
		
	Memory.Write32(pwritelen_addr, len);

	return CELL_OK;
}
