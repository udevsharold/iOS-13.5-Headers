/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioToolboxCore/AudioToolboxCore-Structs.h>
#import <AudioToolboxCore/AudioComponentPreferenceProtocol.h>

@interface AudioComponentPrefRegConnection : NSObject <AudioComponentPreferenceProtocol> {

	AudioComponentRegistrarImpl* mImpl;
	ConnectionInfo mConnInfo;

}
-(void)setExtensionComponentList:(id)arg1 linkedSDKVersion:(int)arg2 components:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)getExtensionComponentList:(id)arg1 linkedSDKVersion:(int)arg2 reply:(/*^block*/id)arg3 ;
-(void)getComponentUserTags:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setComponentUserTags:(id)arg1 tags:(id)arg2 ;
-(void)getExtensionIcon:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)getInterAppIcon:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)initWithRegistrar:(AudioComponentRegistrarImpl*)arg1 connection:(id)arg2 ;
@end

