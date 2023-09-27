# include "Point.hpp"

bool Point::bsp(Point const& a, Point const& b, Point const& c, Point const& point) {
	float det = (b.getY().getRawBits() - c.getY().getRawBits()) * (a.getX().getRawBits() - c.getX().getRawBits()) +
				(c.getX().getRawBits() - b.getX().getRawBits()) * (a.getY().getRawBits() - c.getY().getRawBits());

	float alpha = ((b.getY().getRawBits() - c.getY().getRawBits()) * (point.getX().getRawBits() - c.getX().getRawBits()) +
				   (c.getX().getRawBits() - b.getX().getRawBits()) * (point.getY().getRawBits() - c.getY().getRawBits())) / det;
	float beta = ((c.getY().getRawBits() - a.getY().getRawBits()) * (point.getX().getRawBits() - c.getX().getRawBits()) +
				  (a.getX().getRawBits() - c.getX().getRawBits()) * (point.getY().getRawBits() - c.getY().getRawBits())) / det;
	float gamma = 1.0f - alpha - beta;

	return (alpha > 0.0f && alpha < 1.0f &&
			beta > 0.0f && beta < 1.0f &&
			gamma > 0.0f && gamma < 1.0f);
}
