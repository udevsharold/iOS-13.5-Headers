/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSManagedObject, NSDictionary;

@interface NSMergeConflict : NSObject <NSSecureCoding> {

	id _source;
	id _snapshot1;
	id _snapshot2;
	id _snapshot3;
	unsigned long long _newVersion;
	unsigned long long _oldVersion;

}

@property (retain,readonly) NSManagedObject * sourceObject;                //@synthesize source=_source - In the implementation block
@property (retain,readonly) NSDictionary * objectSnapshot;                 //@synthesize snapshot1=_snapshot1 - In the implementation block
@property (retain,readonly) NSDictionary * cachedSnapshot;                 //@synthesize snapshot2=_snapshot2 - In the implementation block
@property (retain,readonly) NSDictionary * persistedSnapshot;              //@synthesize snapshot3=_snapshot3 - In the implementation block
@property (readonly) unsigned long long newVersionNumber;                  //@synthesize newVersion=_newVersion - In the implementation block
@property (readonly) unsigned long long oldVersionNumber;                  //@synthesize oldVersion=_oldVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)objectForKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(void)_doCleanupForXPCStore:(id)arg1 context:(id)arg2 ;
-(NSManagedObject *)sourceObject;
-(id)initWithSource:(id)arg1 newVersion:(unsigned long long)arg2 oldVersion:(unsigned long long)arg3 snapshot1:(id)arg4 snapshot2:(id)arg5 snapshot3:(id)arg6 ;
-(id)initWithSource:(id)arg1 newVersion:(unsigned long long)arg2 oldVersion:(unsigned long long)arg3 cachedSnapshot:(id)arg4 persistedSnapshot:(id)arg5 ;
-(id)ancestorSnapshot;
-(NSDictionary *)objectSnapshot;
-(NSDictionary *)cachedSnapshot;
-(NSDictionary *)persistedSnapshot;
-(unsigned long long)newVersionNumber;
-(unsigned long long)oldVersionNumber;
@end

