/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebCore/WebCore-Structs.h>
@class CADisplayLink;

@interface WebDisplayLinkHandler : NSObject {

	DisplayRefreshMonitorIOS* m_monitor;
	CADisplayLink* m_displayLink;

}
-(void)dealloc;
-(void)invalidate;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(void)handleDisplayLink:(id)arg1 ;
-(id)initWithMonitor:(DisplayRefreshMonitorIOS*)arg1 ;
@end

