/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSuggestions/SGObject.h>

@class NSString, SGExtractionInfo;

@interface SGName : SGObject {

	NSString* _fullName;
	NSString* _firstName;
	NSString* _middleName;
	NSString* _lastName;
	NSString* _prefix;
	NSString* _suffix;
	SGExtractionInfo* _extractionInfo;

}

@property (nonatomic,readonly) NSString * fullName;                            //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,readonly) NSString * firstName;                           //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,readonly) NSString * middleName;                          //@synthesize middleName=_middleName - In the implementation block
@property (nonatomic,readonly) NSString * lastName;                            //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,readonly) NSString * prefix;                              //@synthesize prefix=_prefix - In the implementation block
@property (nonatomic,readonly) NSString * suffix;                              //@synthesize suffix=_suffix - In the implementation block
@property (nonatomic,readonly) SGExtractionInfo * extractionInfo;              //@synthesize extractionInfo=_extractionInfo - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)nameWithFirstName:(id)arg1 lastName:(id)arg2 middleName:(id)arg3 fullName:(id)arg4 prefix:(id)arg5 suffix:(id)arg6 withRecordId:(id)arg7 origin:(id)arg8 ;
+(id)nameWithFirstName:(id)arg1 lastName:(id)arg2 withRecordId:(id)arg3 origin:(id)arg4 ;
+(id)nameWithFirstName:(id)arg1 withRecordId:(id)arg2 origin:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)middleName;
-(NSString *)fullName;
-(NSString *)prefix;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)suffix;
-(SGExtractionInfo *)extractionInfo;
-(id)initWithFirstName:(id)arg1 middleName:(id)arg2 lastName:(id)arg3 fullName:(id)arg4 prefix:(id)arg5 suffix:(id)arg6 recordId:(id)arg7 origin:(id)arg8 extractionInfo:(id)arg9 ;
-(id)initWithFirstName:(id)arg1 middleName:(id)arg2 lastName:(id)arg3 fullName:(id)arg4 prefix:(id)arg5 suffix:(id)arg6 recordId:(id)arg7 origin:(id)arg8 ;
-(BOOL)isEqualToName:(id)arg1 ;
@end

