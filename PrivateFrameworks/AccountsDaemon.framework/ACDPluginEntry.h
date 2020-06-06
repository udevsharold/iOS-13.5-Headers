/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccountsDaemon/AccountsDaemon-Structs.h>
#import <libobjc.A.dylib/ACDPluginEntryProtocol.h>

@class NSSet, NSString, NSBundle;

@interface ACDPluginEntry : NSObject <ACDPluginEntryProtocol> {

	id _principalObject;
	NSSet* _supportedAccountTypes;
	NSSet* _supportedDataclasses;
	NSString* _identifier;
	struct {
		unsigned principalObject : 1;
		unsigned supportedAccountTypes : 1;
		unsigned supportedDataclasses : 1;
		unsigned identifier : 1;
	}  _fetchedFlags;
	NSBundle* _bundle;

}

@property (nonatomic,readonly) NSBundle * bundle;                          //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,readonly) id principalObject; 
@property (nonatomic,readonly) NSSet * supportedAccountTypes; 
@property (nonatomic,readonly) NSSet * supportedDataclasses; 
@property (nonatomic,readonly) NSString * identifier; 
-(id)init;
-(id)description;
-(id)debugDescription;
-(NSString *)identifier;
-(id)initWithBundle:(id)arg1 ;
-(NSBundle *)bundle;
-(NSSet *)supportedDataclasses;
-(id)principalObject;
-(BOOL)principalObjectRespondsToSelector:(SEL)arg1 ;
-(NSSet *)supportedAccountTypes;
@end

