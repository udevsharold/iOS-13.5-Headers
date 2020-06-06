/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNContactUpdate.h>

@class CNPropertyDescription;

@interface CNContactKeyValueUpdate : CNContactUpdate {

	CNPropertyDescription* _property;
	id _value;

}

@property (readonly) CNPropertyDescription * property;              //@synthesize property=_property - In the implementation block
@property (readonly) id value;                                      //@synthesize value=_value - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)value;
-(CNPropertyDescription *)property;
-(BOOL)applyToABPerson:(void*)arg1 withPropertiesContext:(id)arg2 logger:(id)arg3 error:(id*)arg4 ;
-(id)initWithProperty:(id)arg1 value:(id)arg2 ;
-(void)applyToMutableContact:(id)arg1 withIdentifierMap:(id)arg2 ;
@end

