/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSDictionary;

@interface MSASEnqueuedCommand : NSObject <NSCoding> {

	NSString* _command;
	NSDictionary* _variantParam;
	NSDictionary* _invariantParam;

}

@property (nonatomic,copy) NSString * command;                           //@synthesize command=_command - In the implementation block
@property (nonatomic,retain) NSDictionary * variantParam;                //@synthesize variantParam=_variantParam - In the implementation block
@property (nonatomic,retain) NSDictionary * invariantParam;              //@synthesize invariantParam=_invariantParam - In the implementation block
+(id)command;
+(id)commandwithCommand:(id)arg1 variantParam:(id)arg2 invariantParam:(id)arg3 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setCommand:(NSString *)arg1 ;
-(NSString *)command;
-(id)initWithCommand:(id)arg1 variantParam:(id)arg2 invariantParam:(id)arg3 ;
-(BOOL)canBeGroupedWithCommand:(id)arg1 ;
-(NSDictionary *)variantParam;
-(void)setVariantParam:(NSDictionary *)arg1 ;
-(NSDictionary *)invariantParam;
-(void)setInvariantParam:(NSDictionary *)arg1 ;
@end

