//
//  STNPC.m
//  Game
//
//  Created by Ilija Tovilo on 5/7/13.
//  Copyright (c) 2013 by Lukas Seglias & Ilija Tovilo. All rights reserved.
//

#import "STNPC.h"

@implementation STNPC

- (STGameObjectBodyType)bodyType {
    // We make the default body type of the enemies dynamic
    return STGameObjectBodyTypeDynamic;
}

@end
