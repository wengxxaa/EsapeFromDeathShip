//
//  HelloWorldScene.h
//  Escape
//
//  Created by user on 14-7-14.
//  Copyright david_tsang 2014年. All rights reserved.
//
// -----------------------------------------------------------------------

// Importing cocos2d.h and cocos2d-ui.h, will import anything you need to start using Cocos2D v3
#import "cocos2d.h"
#import "cocos2d-ui.h"

static NSString *KeyHighScore = @"high_score";
// -----------------------------------------------------------------------

#define kSceneHome 20
#define kSceneGetReady 21
#define kSceneGameOver 22
#define kSceneGameing 23
/**
 *  The main scene
 */
@interface HelloWorldScene : CCScene
{
    CCActionRepeatForever *_fightRepeat;
    BOOL _isGemeOver;
    
}
// -----------------------------------------------------------------------
@property(nonatomic,assign)NSInteger sceneType;
@property(nonatomic,strong) id<ALSoundSource> fightEngine;
+ (HelloWorldScene *)scene;
- (id)init;

// -----------------------------------------------------------------------
-(void)showGameHome;
-(void)showGetReady;
@end