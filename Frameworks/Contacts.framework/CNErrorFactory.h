/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Contacts/Contacts-Structs.h>
@interface CNErrorFactory : NSObject
+(id)errorWithCode:(long long)arg1 userInfo:(id)arg2 ;
+(id)errorObject:(id)arg1 doesNotImplementSelector:(SEL)arg2 ;
+(id)validationErrorByAggregatingValidationErrors:(id)arg1 ;
+(id)errorByPrependingKeyPath:(id)arg1 toKeyPathsInError:(id)arg2 ;
+(id)genericiOSABError;
+(long long)CNErrorCodeForABError:(CFErrorRef)arg1 ;
+(id)errorForiOSABError:(CFErrorRef)arg1 ;
+(id)errorWithCode:(long long)arg1 ;
+(id)errorByAddingUserInfoEntries:(id)arg1 toError:(id)arg2 ;
+(id)_localizedReasonForCode:(long long)arg1 ;
+(id)_localizedDescriptionForCode:(long long)arg1 ;
@end

