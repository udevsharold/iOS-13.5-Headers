/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class TIUserDictionaryEntryValue;

@interface TIUserDictionaryTransaction : NSObject <NSSecureCoding> {

	TIUserDictionaryEntryValue* _valueToDelete;
	TIUserDictionaryEntryValue* _valueToInsert;

}

@property (nonatomic,retain) TIUserDictionaryEntryValue * valueToDelete;              //@synthesize valueToDelete=_valueToDelete - In the implementation block
@property (nonatomic,retain) TIUserDictionaryEntryValue * valueToInsert;              //@synthesize valueToInsert=_valueToInsert - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(TIUserDictionaryEntryValue *)valueToDelete;
-(void)setValueToDelete:(TIUserDictionaryEntryValue *)arg1 ;
-(TIUserDictionaryEntryValue *)valueToInsert;
-(void)setValueToInsert:(TIUserDictionaryEntryValue *)arg1 ;
@end

