/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/IdentityLookup.framework/IdentityLookup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface ILCommunication : NSObject <NSSecureCoding> {

	NSString* _sender;
	NSDate* _dateReceived;

}

@property (nonatomic,copy,readonly) NSString * sender;                  //@synthesize sender=_sender - In the implementation block
@property (nonatomic,copy,readonly) NSDate * dateReceived;              //@synthesize dateReceived=_dateReceived - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)sender;
-(NSDate *)dateReceived;
-(id)initWithSender:(id)arg1 dateReceived:(id)arg2 ;
-(BOOL)isEqualToCommunication:(id)arg1 ;
@end

