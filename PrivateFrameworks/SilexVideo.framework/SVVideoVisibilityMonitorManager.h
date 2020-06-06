/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVVideoVisibilityMonitorProviding.h>

@protocol SVVisibilityMonitorFactory;
@class SVWeakObjectCache, NSString;

@interface SVVideoVisibilityMonitorManager : NSObject <SVVideoVisibilityMonitorProviding> {

	id<SVVisibilityMonitorFactory> _videoVisibilityMonitorFactory;
	SVWeakObjectCache* _visibilityMonitors;

}

@property (nonatomic,readonly) id<SVVisibilityMonitorFactory> videoVisibilityMonitorFactory;              //@synthesize videoVisibilityMonitorFactory=_videoVisibilityMonitorFactory - In the implementation block
@property (nonatomic,readonly) SVWeakObjectCache * visibilityMonitors;                                    //@synthesize visibilityMonitors=_visibilityMonitors - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)visibilityMonitorForVideo:(id)arg1 ;
-(id)initWithVideoVisibilityMonitorFactory:(id)arg1 ;
-(SVWeakObjectCache *)visibilityMonitors;
-(id<SVVisibilityMonitorFactory>)videoVisibilityMonitorFactory;
@end

