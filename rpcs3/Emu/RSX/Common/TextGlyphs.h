#pragma once

#include <vector>
#include <unordered_map>
#include <Utilities/types.h>

/**
* FONT GLYPHS GO HERE
* Any font in hex format should work here.
* For this case, We're using ANSI 128 characters, but more types can be supported
*
* This example is the GNU unifont glyph set
*/

const static std::string GNU_UNIFONT_GLYPHS[128] =
{
	"0000 : AAAA00018000000180004A51EA505A51C99E0001800000018000000180005555",
	"0001 : AAAA00018000000180003993C252325F8A527193800000018000000180005555",
	"0002 : AAAA00018000000180003BA5C124311989247125800000018000000180005555",
	"0003 : AAAA00018000000180007BA5C1247919C1247925800000018000000180005555",
	"0004 : AAAA000180000001800079BFC2487A49C2487989800000018000000180005555",
	"0005 : AAAA00018000000180007A4DC2527B53C2D67A4F800000018000000180005555",
	"0006 : AAAA000180000001800031A5CA287A31CA2849A5800000018000000180005555",
	"0007 : AAAA000180000001800073D1CA1073D1CA1073DF800000018000000180005555",
	"0008 : AAAA00018000000180001E3991401E3191081E71800000018000000180005555",
	"0009 : AAAA000180000001800022F9A2203E21A2202221800000018000000180005555",
	"000A : AAAA000180000001800020F9A08020F9A0803E81800000018000000180005555",
	"000B : AAAA000180000001800022F9A220222194200821800000018000000180005555",
	"000C : AAAA00018000000180003EF9A0803EF9A0802081800000018000000180005555",
	"000D : AAAA00018000000180001EF1A08820F1A0901E89800000018000000180005555",
	"000E : AAAA00018000000180001E71A0881C8982883C71800000018000000180005555",
	"000F : AAAA00018000000180001EF9A0201C2182203CF9800000018000000180005555",
	"0010 : AAAA0001800000018000391DA510251DA51039DD800000018000000180005555",
	"0011 : AAAA00018000000180007189CA184A09CA08719D800000018000000180005555",
	"0012 : AAAA00018000000180007199CA044A09CA10719D800000018000000180005555",
	"0013 : AAAA00018000000180007199CA044A19CA047199800000018000000180005555",
	"0014 : AAAA00018000000180007185CA0C4A15CA1C7185800000018000000180005555",
	"0015 : AAAA00018000000180004993EA546A59DBD44A53800000018000000180005555",
	"0016 : AAAA00018000000180003453C29A311789127113800000018000000180005555",
	"0017 : AAAA00018000000180007BB9C1247939C1247939800000018000000180005555",
	"0018 : AAAA00018000000180003325C4B447ADC4A434A5800000018000000180005555",
	"0019 : AAAA00018000000180003E89A0D83EA9A0883E89800000018000000180005555",
	"001A : AAAA00018000000180003A5DC252325D8A52719D800000018000000180005555",
	"001B : AAAA000180000001800079CFC2107991C0507B8F800000018000000180005555",
	"001C : AAAA00018000000180001E7190801E61901010E1800000018000000180005555",
	"001D : AAAA00018000000180000E719080166192100EE1800000018000000180005555",
	"001E : AAAA00018000000180001C7192801C61941012E1800000018000000180005555",
	"001F : AAAA000180000001800012719280126192100CE1800000018000000180005555",
	"0020 : 00000000000000000000000000000000",
	"0021 : 00000000080808080808080008080000",
	"0022 : 00002222222200000000000000000000",
	"0023 : 000000001212127E24247E4848480000",
	"0024 : 00000000083E4948380E09493E080000",
	"0025 : 00000000314A4A340808162929460000",
	"0026 : 000000001C2222141829454246390000",
	"0027 : 00000808080800000000000000000000",
	"0028 : 00000004080810101010101008080400",
	"0029 : 00000020101008080808080810102000",
	"002A : 00000000000008492A1C2A4908000000",
	"002B : 0000000000000808087F080808000000",
	"002C : 00000000000000000000000018080810",
	"002D : 0000000000000000003C000000000000",
	"002E : 00000000000000000000000018180000",
	"002F : 00000000020204080810102040400000",
	"0030 : 00000000182442464A52624224180000",
	"0031 : 000000000818280808080808083E0000",
	"0032 : 000000003C4242020C102040407E0000",
	"0033 : 000000003C4242021C020242423C0000",
	"0034 : 00000000040C142444447E0404040000",
	"0035 : 000000007E4040407C020202423C0000",
	"0036 : 000000001C2040407C424242423C0000",
	"0037 : 000000007E0202040404080808080000",
	"0038 : 000000003C4242423C424242423C0000",
	"0039 : 000000003C4242423E02020204380000",
	"003A : 00000000000018180000001818000000",
	"003B : 00000000000018180000001808081000",
	"003C : 00000000000204081020100804020000",
	"003D : 000000000000007E0000007E00000000",
	"003E : 00000000004020100804081020400000",
	"003F : 000000003C4242020408080008080000",
	"0040 : 000000001C224A565252524E201E0000",
	"0041 : 0000000018242442427E424242420000",
	"0042 : 000000007C4242427C424242427C0000",
	"0043 : 000000003C42424040404042423C0000",
	"0044 : 00000000784442424242424244780000",
	"0045 : 000000007E4040407C404040407E0000",
	"0046 : 000000007E4040407C40404040400000",
	"0047 : 000000003C424240404E4242463A0000",
	"0048 : 00000000424242427E42424242420000",
	"0049 : 000000003E08080808080808083E0000",
	"004A : 000000001F0404040404044444380000",
	"004B : 00000000424448506060504844420000",
	"004C : 000000004040404040404040407E0000",
	"004D : 00000000424266665A5A424242420000",
	"004E : 0000000042626252524A4A4646420000",
	"004F : 000000003C42424242424242423C0000",
	"0050 : 000000007C4242427C40404040400000",
	"0051 : 000000003C4242424242425A663C0300",
	"0052 : 000000007C4242427C48444442420000",
	"0053 : 000000003C424240300C0242423C0000",
	"0054 : 000000007F0808080808080808080000",
	"0055 : 000000004242424242424242423C0000",
	"0056 : 00000000414141222222141408080000",
	"0057 : 00000000424242425A5A666642420000",
	"0058 : 00000000424224241818242442420000",
	"0059 : 00000000414122221408080808080000",
	"005A : 000000007E02020408102040407E0000",
	"005B : 0000000E080808080808080808080E00",
	"005C : 00000000404020101008080402020000",
	"005D : 00000070101010101010101010107000",
	"005E : 00001824420000000000000000000000",
	"005F : 00000000000000000000000000007F00",
	"0060 : 00201008000000000000000000000000",
	"0061 : 0000000000003C42023E4242463A0000",
	"0062 : 0000004040405C6242424242625C0000",
	"0063 : 0000000000003C4240404040423C0000",
	"0064 : 0000000202023A4642424242463A0000",
	"0065 : 0000000000003C42427E4040423C0000",
	"0066 : 0000000C1010107C1010101010100000",
	"0067 : 0000000000023A44444438203C42423C",
	"0068 : 0000004040405C624242424242420000",
	"0069 : 000000080800180808080808083E0000",
	"006A : 0000000404000C040404040404044830",
	"006B : 00000040404044485060504844420000",
	"006C : 000000180808080808080808083E0000",
	"006D : 00000000000076494949494949490000",
	"006E : 0000000000005C624242424242420000",
	"006F : 0000000000003C4242424242423C0000",
	"0070 : 0000000000005C6242424242625C4040",
	"0071 : 0000000000003A4642424242463A0202",
	"0072 : 0000000000005C624240404040400000",
	"0073 : 0000000000003C4240300C02423C0000",
	"0074 : 000000001010107C10101010100C0000",
	"0075 : 000000000000424242424242463A0000",
	"0076 : 00000000000042424224242418180000",
	"0077 : 00000000000041494949494949360000",
	"0078 : 00000000000042422418182442420000",
	"0079 : 0000000000004242424242261A02023C",
	"007A : 0000000000007E0204081020407E0000",
	"007B : 0000000C101008081010080810100C00",
	"007C : 00000808080808080808080808080808",
	"007D : 00000030080810100808101008083000",
	"007E : 00000031494600000000000000000000",
	"007F : AAAA000180000001800073D1CA104BD1CA1073DF800000018000000180005555"
};

class GlyphManager
{
private:

	struct glyph
	{
		u8 character;
		u32 glyph_point_offset;
		u32 points_count;
		std::vector<u8> plot;
	};

	std::unordered_map<u8, glyph> glyph_map;

	void decode_glyph_map(const std::string glyphs[128])
	{
		for (int i = 0; i < 128; ++i)
		{
			std::string character = glyphs[i];
			std::string index = character.substr(0, 4);
			std::string glyph_data = character.substr(7);

			glyph this_glyph;
			this_glyph.character = strtol(index.c_str(), nullptr, 16);
			this_glyph.plot.reserve(16);

			if (glyph_data.length() == 32)
			{
				for (int n = 0; n < 16; ++n)
				{
					std::string line = glyph_data.substr(n * 2, 2);
					u8 value = (u8)strtol(line.c_str(), nullptr, 16);
					this_glyph.plot.push_back(value);
				}
			}
			else
			{
				//TODO: Support 16-wide characters
				for (int n = 0; n < 16; ++n)
					this_glyph.plot.push_back(0);
			}

			glyph_map[this_glyph.character] = this_glyph;
		}
	}

public:

	struct glyph_point
	{
		float x;
		float y;

		glyph_point(float _x, float _y) : x(_x), y(_y)
		{}
	};

	GlyphManager()
	{
		glyph_map = {};
		decode_glyph_map(GNU_UNIFONT_GLYPHS);
	}

	std::vector<glyph_point> generate_point_map()
	{
		std::vector<glyph_point> result;

		for (auto &entry : glyph_map)
		{
			glyph& text = entry.second;
			text.glyph_point_offset = (u32)result.size();

			for (int j = 0; j < 16; ++j)
			{
				auto &line = text.plot[j];
				if (line == 0)
					continue;

				for (int i = 0; i < 8; ++i)
				{
					if (line & (1 << i))
					{
						//Font is inverted, so we correct it for conventional renderers
						float x = (float)(7 - i);
						float y = (float)(15 - j);
						result.push_back({ x, y });
					}
				}
			}

			text.points_count = (u32)result.size() - text.glyph_point_offset;
		}

		return result;
	}

	std::unordered_map<u8, std::pair<u32, u32>> get_glyph_offsets()
	{
		std::unordered_map<u8, std::pair<u32, u32>> result = {};
		for (auto &entry : glyph_map)
		{
			result[entry.second.character] = std::make_pair(entry.second.glyph_point_offset, entry.second.points_count);
		}

		return result;
	}
};