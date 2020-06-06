/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface CNChangeHistoryAnchor : NSObject <NSCopying, NSSecureCoding> {

	long long _sequenceNumber;

}

@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) long long sequenceNumber;              //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)data;
-(long long)sequenceNumber;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(id)initWithSequenceNumber:(long long)arg1 ;
@end

