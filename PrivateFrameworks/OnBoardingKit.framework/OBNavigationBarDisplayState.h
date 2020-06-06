/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface OBNavigationBarDisplayState : NSObject {

	double _backgroundOpacity;
	double _titleOpacity;

}

@property (assign,nonatomic) double backgroundOpacity;              //@synthesize backgroundOpacity=_backgroundOpacity - In the implementation block
@property (assign,nonatomic) double titleOpacity;                   //@synthesize titleOpacity=_titleOpacity - In the implementation block
+(id)displayStateForNavigationBar:(id)arg1 ;
-(id)initWithNavigationBar:(id)arg1 ;
-(void)setBackgroundOpacity:(double)arg1 ;
-(double)backgroundOpacity;
-(double)titleOpacity;
-(void)applyState:(id)arg1 ;
-(void)setTitleOpacity:(double)arg1 ;
@end

