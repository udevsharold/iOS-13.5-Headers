/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SIMToolkitUI/STKBaseSound.h>
#import <libobjc.A.dylib/STKSound.h>

@class NSString;

@interface STKSystemSound : STKBaseSound <STKSound> {

	unsigned _systemSoundID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_reallyPlaySound;
-(void)_reallyStopSound;
-(id)initForSystemSoundID:(unsigned)arg1 duration:(double)arg2 ;
@end

