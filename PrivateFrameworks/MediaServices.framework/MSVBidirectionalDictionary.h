/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaServices/MediaServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary;

@interface MSVBidirectionalDictionary : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSMutableDictionary* _keyToObjectDictionary;
	NSMutableDictionary* _objectToKeyDictionary;

}
+(BOOL)supportsSecureCoding;
+(id)bidirectionalDictionary;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)allKeys;
-(id)objectForKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)keyForObject:(id)arg1 ;
@end

