#include "utils/helpers.h"

namespace helpers {
	double dist(Point2f p1, Point2f p2) {
		return norm(p2 - p1);
	}
}