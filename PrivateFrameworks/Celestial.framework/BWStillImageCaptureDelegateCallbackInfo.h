/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@interface BWStillImageCaptureDelegateCallbackInfo : NSObject {

	unsigned _flag;
	SCD_Struct_BW2 _pts;
	BOOL _isPreBracketFrame;

}

@property (nonatomic,readonly) unsigned flag;                       //@synthesize flag=_flag - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BW2 pts;                  //@synthesize pts=_pts - In the implementation block
@property (nonatomic,readonly) BOOL isPreBracketFrame;              //@synthesize isPreBracketFrame=_isPreBracketFrame - In the implementation block
-(id)initWithFlag:(unsigned)arg1 ;
-(unsigned)flag;
-(id)initWithFlag:(unsigned)arg1 pts:(SCD_Struct_BW2)arg2 isPreBracketFrame:(BOOL)arg3 ;
-(SCD_Struct_BW2)pts;
-(BOOL)isPreBracketFrame;
@end

