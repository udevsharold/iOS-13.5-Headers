/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Tips.framework/Tips
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tips/Tips-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface TPSDataCache : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _cacheType;
	long long _maxAge;
	unsigned long long _fileSize;
	NSString* _identifier;
	NSString* _lastModified;
	NSString* _languageCode;
	NSDate* _updatedDate;

}

@property (nonatomic,readonly) BOOL expired; 
@property (assign,nonatomic) unsigned long long cacheType;              //@synthesize cacheType=_cacheType - In the implementation block
@property (assign,nonatomic) long long maxAge;                          //@synthesize maxAge=_maxAge - In the implementation block
@property (assign,nonatomic) unsigned long long fileSize;               //@synthesize fileSize=_fileSize - In the implementation block
@property (nonatomic,retain) NSString * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * lastModified;                   //@synthesize lastModified=_lastModified - In the implementation block
@property (nonatomic,retain) NSString * languageCode;                   //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,retain) NSDate * updatedDate;                      //@synthesize updatedDate=_updatedDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)languageCode;
-(NSString *)identifier;
-(unsigned long long)fileSize;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setFileSize:(unsigned long long)arg1 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(BOOL)expired;
-(long long)maxAge;
-(void)setMaxAge:(long long)arg1 ;
-(NSString *)lastModified;
-(void)setLastModified:(NSString *)arg1 ;
-(unsigned long long)cacheType;
-(void)setCacheType:(unsigned long long)arg1 ;
-(NSDate *)updatedDate;
-(void)setUpdatedDate:(NSDate *)arg1 ;
@end

