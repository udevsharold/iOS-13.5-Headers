/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebCore/WebCore-Structs.h>
@interface WebCoreAudioCaptureSourceIOSListener : NSObject {

	CoreAudioCaptureSourceFactoryIOS* _callback;

}
-(void)invalidate;
-(id)initWithCallback:(CoreAudioCaptureSourceFactoryIOS*)arg1 ;
-(void)handleInterruption:(id)arg1 ;
-(void)sessionMediaServicesWereReset:(id)arg1 ;
@end

