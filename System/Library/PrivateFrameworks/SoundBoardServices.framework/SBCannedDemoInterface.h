/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SoundBoardServices.framework/SoundBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBSImplementer;
@class NSXPCConnection;

@interface SBCannedDemoInterface : NSObject {

	NSXPCConnection* _sbConnection;
	id<SBSImplementer> _sbProxy;

}
-(id)init;
-(void)siriUtteranceFileToBePlayed:(id)arg1 duckMusic:(BOOL)arg2 reply:(/*^block*/id)arg3 ;
@end
