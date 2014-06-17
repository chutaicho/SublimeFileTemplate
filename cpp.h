//
//  Created by Takashi Aoki (c) takashiaoki.com
//

#ifndef __${1:$name}__
#define __${1:$name}__

#include <iostream>

class ${1:$name}
{
public:
	${1:$name}();
	~${1:$name}();
    
	void setup();
	void update();

private:

};

#endif /* defined(__${1:$name}__) */
