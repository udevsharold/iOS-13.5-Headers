/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentPreference.h>

@interface PKPaymentPreferenceCard : PKPaymentPreference {

	BOOL _supportsNullSelection;

}

@property (assign,nonatomic) BOOL supportsNullSelection;              //@synthesize supportsNullSelection=_supportsNullSelection - In the implementation block
-(id)initWithTitle:(id)arg1 preferences:(id)arg2 selectedIndex:(unsigned long long)arg3 readOnly:(BOOL)arg4 ;
-(void)setErrors:(id)arg1 forPreference:(id)arg2 ;
-(id)errorsForPreference:(id)arg1 ;
-(BOOL)supportsDeletion;
-(BOOL)supportsNullSelection;
-(void)setSupportsNullSelection:(BOOL)arg1 ;
@end

