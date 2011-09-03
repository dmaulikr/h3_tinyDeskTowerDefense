//
//  Shader.fsh
//  TinyDeskTowerDefense
//
//  Created by korch on 9/2/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

varying lowp vec4 colorVarying;

void main()
{
    gl_FragColor = colorVarying;
}
