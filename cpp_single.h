//
//  Created by Takashi Aoki (c) takashiaoki.com
//

#ifndef __${1:$name}__
#define __${1:$name}__

#include <iostream>

class ${1:$name}
{
private:
    static ${1:$name}* instance;
	${1:$name}();
	~${1:$name}();

public:
	// singleton --------------------------------------
	static ${1:$name}* getInstance()
	{
		if(instance == NULL)
		{
			instance = new ${1:$name}();
			instance->setup();
		}
		return instance;
	}
	static void deleteInstance()
	{
		if(instance != NULL)
		{
			delete instance;
		}
	}
	// ------------------------------------------------
    
	void setup();
	void update();
};

#endif /* defined(__${1:$name}__) */
