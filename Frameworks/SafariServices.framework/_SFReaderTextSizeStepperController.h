/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_SFSettingsAlertStepperController.h>

@protocol SFReaderContext;
@class NSString;

@interface _SFReaderTextSizeStepperController : NSObject <_SFSettingsAlertStepperController> {

	id<SFReaderContext> _readerContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithReaderContext:(id)arg1 ;
-(void)prepareStepper:(id)arg1 ;
-(void)incrementValue:(id)arg1 ;
-(void)decrementValue:(id)arg1 ;
-(void)_updateStepperControls:(id)arg1 ;
@end

