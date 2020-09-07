/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface CXCallDirectoryStoreExtension : NSObject <NSSecureCoding> {

	NSString* _identifier;
	long long _primaryKey;
	long long _priority;
	long long _state;
	NSDate* _stateLastModified;

}

@property (nonatomic,copy) NSString * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long primaryKey;                    //@synthesize primaryKey=_primaryKey - In the implementation block
@property (assign,nonatomic) long long priority;                      //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) long long state;                         //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSDate * stateLastModified;              //@synthesize stateLastModified=_stateLastModified - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(long long)state;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(void)setState:(long long)arg1 ;
-(long long)primaryKey;
-(void)setPrimaryKey:(long long)arg1 ;
-(void)setStateLastModified:(NSDate *)arg1 ;
-(NSDate *)stateLastModified;
@end
