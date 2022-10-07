//
// Created by Van_XQ on 2021/11/28.
//

#ifndef LANDSCAPE_H_
#define LANDSCAPE_H_
#include <string>
class landscape {
public:
	int id;
	std::string name;
	struct loc
	{
        int x;
        int y;
	}location;
	std::string information;
};
#endif // LANDSCAPE_H_
