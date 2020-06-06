/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@class NSTimer;

@interface OZNotificationStub : NSObject {

	NSTimer* _pTimer;
	OZDocument* _pDocument;

}
-(void)dealloc;
-(void)fire;
-(void)createTimer;
-(void)releaseTimer;
-(id)initWithOZDocument:(OZDocument*)arg1 useTimer:(BOOL)arg2 ;
-(void)processNotifications:(id)arg1 ;
@end

