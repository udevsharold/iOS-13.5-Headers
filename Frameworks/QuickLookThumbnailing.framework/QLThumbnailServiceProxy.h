/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol QLThumbnailsInterface, QLThumbnailAdditionIndexInterface;
@class NSXPCConnection, NSObject;

@interface QLThumbnailServiceProxy : NSObject {

	NSXPCConnection* _connection;
	NSObject*<QLThumbnailsInterface> _proxy;
	NSObject*<QLThumbnailAdditionIndexInterface> _indexProxy;

}
+(id)sharedInstance;
+(id)interface;
-(id)init;
-(void)dealloc;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)updateLastHitDateOfAddition:(id)arg1 onPhysicalURL:(id)arg2 ;
-(void)askThumbnailAdditionIndex:(/*^block*/id)arg1 ;
-(id)indexProxy;
-(void)touchOrAddThumbnailAddition:(id)arg1 forURL:(id)arg2 ;
@end

