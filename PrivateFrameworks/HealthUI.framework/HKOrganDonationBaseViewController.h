/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKTitledBuddyViewController.h>

@class _HKMedicalIDData, NSString;

@interface HKOrganDonationBaseViewController : HKTitledBuddyViewController {

	_HKMedicalIDData* _medicalIDData;
	NSString* _completionButtonTitle;
	/*^block*/id _registrationCompletionHandler;

}

@property (nonatomic,retain) _HKMedicalIDData * medicalIDData;              //@synthesize medicalIDData=_medicalIDData - In the implementation block
@property (nonatomic,retain) NSString * completionButtonTitle;              //@synthesize completionButtonTitle=_completionButtonTitle - In the implementation block
@property (nonatomic,copy) id registrationCompletionHandler;                //@synthesize registrationCompletionHandler=_registrationCompletionHandler - In the implementation block
-(void)setRegistrationCompletionHandler:(id)arg1 ;
-(id)registrationCompletionHandler;
-(_HKMedicalIDData *)medicalIDData;
-(void)setMedicalIDData:(_HKMedicalIDData *)arg1 ;
-(NSString *)completionButtonTitle;
-(void)setCompletionButtonTitle:(NSString *)arg1 ;
-(id)initWithMedicalIDData:(id)arg1 ;
@end

