//
//  Grid.h
//  GameOfLife
//
//  Created by Deji Akala on 23/01/2015.
//  Copyright (c) 2015 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Grid : CCSprite

@property (nonatomic, assign) int totalAlive;
@property (nonatomic, assign) int generation;

@end
