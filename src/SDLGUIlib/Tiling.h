#pragma once

namespace TilingType
{
	enum Enum
	{
		Vertical, Horizontal, NinePatch
	};
}

struct BaseTile
{
	TilingType::Enum type;
};

struct VerticalTile : public BaseTile
{
	std::string top;
	std::string middle;
	std::string bottom;

	VerticalTile(std::string _top, std::string _middle, std::string _bottom)
	{
		top = _top;
		middle = _middle;
		bottom = _bottom;
		type = TilingType::Vertical;
	}
};

struct HorizontalTile : public BaseTile
{
	std::string left;
	std::string middle;
	std::string right;

	HorizontalTile(std::string _left, std::string _middle, std::string _right)
	{
		left = _left;
		middle = _middle;
		right = _right;
		type = TilingType::Horizontal;
	}
};

struct NinePatch : public BaseTile
{
	//Source image
	std::string image;
	//Borders
	unsigned int top;
	unsigned int left;
	unsigned int bottom;
	unsigned int right;

	NinePatch(std::string _image, unsigned int _top, unsigned int _left, unsigned int _bottom, unsigned int _right)
	{
		image = _image;
		top = _top;
		left = _left;
		bottom = _bottom;
		right = _right;
	}
};
