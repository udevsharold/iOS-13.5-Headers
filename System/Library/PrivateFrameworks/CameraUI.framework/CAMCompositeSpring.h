/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CAMSpring.h>

@class NSArray;

@interface CAMCompositeSpring : CAMSpring {

	NSArray* _addedSprings;

}

@property (nonatomic,retain) NSArray * addedSprings;              //@synthesize addedSprings=_addedSprings - In the implementation block
-(void)updateForTimestamp:(double)arg1 ;
-(NSArray *)addedSprings;
-(void)setAddedSprings:(NSArray *)arg1 ;
@end
