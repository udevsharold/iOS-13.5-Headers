/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServices/CoreServices-Structs.h>
#import <libobjc.A.dylib/UMUserPersonaUpdateObserver.h>

@class NSDictionary, NSString;

@interface _LSPersonaDatabase : NSObject <UMUserPersonaUpdateObserver> {

	os_unfair_lock_s _lock;
	BOOL _registered;
	NSDictionary* _cachedBundleIDToPersonasMap;
	NSString* _cachedSystemPersonaIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)registerWithUserManagerForAttempt:(unsigned long long)arg1 maxAttempts:(unsigned long long)arg2 ;
-(void)registerWithUserManager;
-(id)initPrivately;
-(void)getUncachedBundleIDToPersonasMap:(id*)arg1 systemPersonaIdentifier:(id*)arg2 ;
-(void)getCachedBundleIDToPersonasMap:(id*)arg1 systemPersonaIdentifier:(id*)arg2 ;
-(id)getBundleIDToPersonasMap;
-(id)getSystemPersonaIdentifier;
-(void)personaListDidUpdate;
-(id)personaIdentifiersForBundleIdentifier:(id)arg1 ;
-(BOOL)personaListContainsSystemPersona:(id)arg1 ;
@end

