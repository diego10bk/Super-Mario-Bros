//
//  STLevelLayer.h
//  Game
//
//  Created by Ilija Tovilo on 3/12/13.
//  Copyright (c) 2013 Ilija Tovilo. All rights reserved.
//

#import "STTiledMapLayer.h"

@interface STLevelLayer : STTiledMapLayer

- (id)initWithWorldID:(unsigned short)worldID levelID:(unsigned short)levelID;
+ (id)layerWithWorldID:(unsigned short)worldID levelID:(unsigned short)levelID;

@end
