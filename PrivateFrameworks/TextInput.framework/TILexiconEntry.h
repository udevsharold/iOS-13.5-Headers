/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface TILexiconEntry : NSObject <NSCopying, NSSecureCoding> {

	NSString* _userInput;
	NSString* _documentText;

}

@property (nonatomic,readonly) NSString * documentText;              //@synthesize documentText=_documentText - In the implementation block
@property (nonatomic,readonly) NSString * userInput;                 //@synthesize userInput=_userInput - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)entryWithDocumentText:(id)arg1 userInput:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)userInput;
-(NSString *)documentText;
@end

