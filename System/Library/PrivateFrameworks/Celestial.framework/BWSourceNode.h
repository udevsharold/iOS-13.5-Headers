/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@interface BWSourceNode : BWNode

@property (nonatomic,readonly) OpaqueCMClockRef clock; 
-(id)nodeType;
-(BOOL)start:(id*)arg1 ;
-(BOOL)stop:(id*)arg1 ;
-(OpaqueCMClockRef)clock;
-(void)makeOutputsLiveIfNeeded;
@end

