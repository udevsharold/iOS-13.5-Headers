/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SilexVideo/SilexVideo-Structs.h>
#import <SilexVideo/SVMaterialButton.h>

@interface SVVideoAdSkipButton : SVMaterialButton {

	unsigned long long _skipDuration;

}

@property (assign,nonatomic) unsigned long long skipDuration;              //@synthesize skipDuration=_skipDuration - In the implementation block
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(unsigned long long)skipDuration;
-(void)setSkipDuration:(unsigned long long)arg1 ;
-(id)titleForDuration:(unsigned long long)arg1 ;
@end

