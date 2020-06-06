/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmailFoundation/EmailFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSPredicate, NSArray, NSString;

@interface EFQuery : NSObject <NSSecureCoding, NSCopying> {

	Class _targetClass;
	NSPredicate* _predicate;
	NSArray* _sortDescriptors;
	unsigned long long _queryOptions;
	NSString* _label;

}

@property (nonatomic,readonly) Class targetClass;                            //@synthesize targetClass=_targetClass - In the implementation block
@property (nonatomic,copy,readonly) NSPredicate * predicate;                 //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * sortDescriptors;               //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (nonatomic,readonly) unsigned long long queryOptions;              //@synthesize queryOptions=_queryOptions - In the implementation block
@property (nonatomic,copy,readonly) NSString * label;                        //@synthesize label=_label - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSPredicate *)predicate;
-(NSArray *)sortDescriptors;
-(Class)targetClass;
-(NSString *)label;
-(unsigned long long)queryOptions;
-(id)initWithTargetClass:(Class)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 queryOptions:(unsigned long long)arg4 label:(id)arg5 ;
-(BOOL)_isEqualToQuery:(id)arg1 ;
-(id)initWithTargetClass:(Class)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 ;
@end

