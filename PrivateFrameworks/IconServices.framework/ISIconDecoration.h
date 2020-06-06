/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IconServices/IconServices-Structs.h>
#import <libobjc.A.dylib/ISIconDecorationInternal.h>
#import <libobjc.A.dylib/ISIconDecoration.h>

@protocol ISIconDecoration <NSObject,NSSecureCoding>
@end

#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSUUID;

@interface ISIconDecoration : NSObject <ISIconDecorationInternal, ISIconDecoration, NSCopying> {

	long long _position;
	long long _mode;
	NSString* _identifier;
	unsigned long long _identifierKind;

}

@property (readonly) NSUUID * uuid; 
@property (readonly) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long identifierKind;              //@synthesize identifierKind=_identifierKind - In the implementation block
@property (readonly) NSUUID * resourceFingerprint; 
@property (assign) long long position;                               //@synthesize position=_position - In the implementation block
@property (assign) long long mode;                                   //@synthesize mode=_mode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setMode:(long long)arg1 ;
-(NSUUID *)uuid;
-(long long)position;
-(long long)mode;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(id)initWithType:(id)arg1 ;
-(void)setPosition:(long long)arg1 ;
-(id)imageForDescriptor:(id)arg1 ;
-(unsigned long long)identifierKind;
-(NSUUID *)resourceFingerprint;
-(void)prepareImagesForDescriptors:(id)arg1 ;
@end

