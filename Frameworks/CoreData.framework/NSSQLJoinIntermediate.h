/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLIntermediate.h>

@class NSSQLRelationship, NSString;

@interface NSSQLJoinIntermediate : NSSQLIntermediate {

	NSSQLRelationship* _relationship;
	NSString* _sourceAlias;
	NSString* _destinationAlias;
	NSString* _correlationAlias;
	unsigned long long _type;
	BOOL _direct;

}
+(id)createToOneJoinIntermediateForProperty:(id)arg1 lastStep:(id)arg2 inScope:(id)arg3 context:(id)arg4 ;
+(id)createToManyJoinIntermediateForProperty:(id)arg1 lastStep:(id)arg2 inScope:(id)arg3 context:(id)arg4 ;
+(id)createManyToManyJoinIntermediateForProperty:(id)arg1 direct:(BOOL)arg2 lastStep:(id)arg3 inScope:(id)arg4 context:(id)arg5 ;
+(id)createJoinIntermediatesForKeypath:(id)arg1 startEntity:(id)arg2 startAlias:(id)arg3 forScope:(id)arg4 inStatementIntermediate:(id)arg5 inContext:(id)arg6 ;
-(void)dealloc;
-(id)description;
-(id)relationship;
-(id)destinationEntity;
-(id)generateSQLStringInContext:(id)arg1 ;
-(id)sourceEntity;
-(void)setJoinType:(unsigned long long)arg1 ;
-(id)destinationAlias;
-(id)initForRelationship:(id)arg1 sourceAlias:(id)arg2 destinationAlias:(id)arg3 correlationAlias:(id)arg4 direct:(BOOL)arg5 inScope:(id)arg6 ;
-(id)sourceAlias;
-(void)setSourceAlias:(id)arg1 ;
-(id)_generateToOneSQLStringInContext:(id)arg1 ;
-(id)_generateToManySQLStringInContext:(id)arg1 ;
-(id)_generateManyToManySQLStringInContext:(id)arg1 ;
-(BOOL)isDirect;
-(void)setDirect:(BOOL)arg1 ;
-(void)setDestinationAlias:(id)arg1 ;
-(id)correlationAlias;
-(BOOL)joinType;
@end

