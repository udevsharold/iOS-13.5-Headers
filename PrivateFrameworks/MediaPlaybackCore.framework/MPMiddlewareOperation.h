/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSError, NSArray;


@protocol MPMiddlewareOperation <NSObject>
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,copy) id invalidationHandler; 
@property (nonatomic,readonly) NSArray * invalidationObservers; 
@optional
-(id)timeoutDescription;

@required
-(NSError *)error;
-(void)setInvalidationHandler:(/*^block*/id)arg1;
-(id)invalidationHandler;
-(NSArray *)invalidationObservers;

@end

