/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMSubjectAreaChangeMonitoringCommand : CAMCaptureCommand {

	BOOL __enabled;

}

@property (getter=_isEnabled,nonatomic,readonly) BOOL _enabled;              //@synthesize _enabled=__enabled - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_isEnabled;
-(void)executeWithContext:(id)arg1 ;
-(id)initWithSubjectAreaChangeMonitoringEnabled:(BOOL)arg1 ;
@end

