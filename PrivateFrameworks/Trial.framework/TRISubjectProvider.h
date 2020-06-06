/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, _PASLock;

@interface TRISubjectProvider : NSObject <NSSecureCoding> {

	NSString* _path;
	_PASLock* _lock;

}
+(BOOL)supportsSecureCoding;
+(id)defaultProvider;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(BOOL)save;
-(id)subject;
-(id)anchorDate;
-(id)subjectWithProjectId:(int)arg1 ;
-(id)nextRotationDate;
-(void)decodeWithCoder:(id)arg1 guardedData:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 guardedData:(id)arg2 ;
-(BOOL)loadUsingGuardedData:(id)arg1 ;
-(unsigned long long)numberOfWeeksPerRotation;
-(id)nextRotationDateAfter:(id)arg1 ;
-(void)setNextRotationDate:(id)arg1 ;
-(void)rotateSubject;
@end

