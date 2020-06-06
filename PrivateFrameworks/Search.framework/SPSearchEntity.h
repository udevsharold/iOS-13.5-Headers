/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Search/Search-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SPSearchEntity : NSObject <NSSecureCoding> {

	BOOL _hasWords;
	NSString* _bundleIdentifier;

}

@property (retain) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (readonly) NSString * tokenText; 
@property (readonly) NSString * queryString; 
@property (readonly) BOOL isPeopleSearch; 
@property (readonly) BOOL isScopedAppSearch; 
@property (assign) BOOL hasWords;                            //@synthesize hasWords=_hasWords - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(id)initWithContactIdentifier:(id)arg1 ;
-(NSString *)queryString;
-(id)initWithQueryString:(id)arg1 tokenText:(id)arg2 ;
-(id)initWithBundleIdentifier:(id)arg1 appName:(id)arg2 ;
-(BOOL)isPeopleSearch;
-(BOOL)isScopedAppSearch;
-(NSString *)tokenText;
-(BOOL)hasWords;
-(void)setHasWords:(BOOL)arg1 ;
@end

