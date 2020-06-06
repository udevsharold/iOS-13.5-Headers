/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNPermissivePolicy.h>

@class NSDictionary;

@interface CNDictionaryPolicy : CNPermissivePolicy {

	NSDictionary* _policyDictionary;

}
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1 ;
-(id)supportedLabelsForContactProperty:(id)arg1 ;
-(unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1 label:(id)arg2 ;
-(id)unsupportedAttributesForLableledContactProperty:(id)arg1 ;
-(BOOL)isContactPropertySupported:(id)arg1 ;
-(id)contactRestrictionsForLabeledProperty:(id)arg1 ;
@end

