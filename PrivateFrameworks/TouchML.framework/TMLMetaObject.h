/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchML/TouchML-Structs.h>
#import <libobjc.A.dylib/TMLModelSerialize.h>

@class NSString, NSMutableDictionary, NSMutableOrderedSet, NSMutableArray, NSMutableSet, TMLValueExpression, NSSet, NSDictionary, NSOrderedSet, NSArray;

@interface TMLMetaObject : NSObject <TMLModelSerialize> {

	NSString* _type;
	NSMutableDictionary* _properties;
	NSMutableOrderedSet* _propertyKeys;
	NSMutableDictionary* _signalHandlers;
	NSMutableArray* _declarations;
	NSMutableArray* _objects;
	NSMutableSet* _implements;
	TMLValueExpression* _initializer;
	NSSet* _attributes;
	NSString* _identifier;

}

@property (nonatomic,readonly) NSString * type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * properties;                   //@synthesize properties=_properties - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * propertyKeys;                 //@synthesize propertyKeys=_propertyKeys - In the implementation block
@property (nonatomic,readonly) NSDictionary * signalHandlers;               //@synthesize signalHandlers=_signalHandlers - In the implementation block
@property (nonatomic,readonly) NSArray * declarations;                      //@synthesize declarations=_declarations - In the implementation block
@property (nonatomic,readonly) NSArray * objects;                           //@synthesize objects=_objects - In the implementation block
@property (nonatomic,retain) TMLValueExpression * initializer;              //@synthesize initializer=_initializer - In the implementation block
@property (nonatomic,readonly) NSSet * implements;                          //@synthesize implements=_implements - In the implementation block
@property (nonatomic,readonly) NSSet * attributes;                          //@synthesize attributes=_attributes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)decode:(const ProtobufCMessage*)arg1 ;
-(void)addObject:(id)arg1 ;
-(NSString *)type;
-(NSString *)identifier;
-(NSSet *)attributes;
-(NSArray *)objects;
-(NSDictionary *)properties;
-(void)encode:(ProtobufCMessage*)arg1 ;
-(id)initWithType:(id)arg1 attributes:(id)arg2 ;
-(NSArray *)declarations;
-(void)addDeclaration:(id)arg1 ;
-(NSOrderedSet *)propertyKeys;
-(NSSet *)implements;
-(void)addProperty:(id)arg1 value:(id)arg2 ;
-(void)addPropertyDeclaration:(id)arg1 typeName:(id)arg2 attributes:(id)arg3 ;
-(id)signalDeclaration:(id)arg1 ;
-(void)addSignalHandler:(id)arg1 signalTarget:(id)arg2 ;
-(void)setInitializer:(TMLValueExpression *)arg1 ;
-(void)addImplements:(id)arg1 ;
-(void)addSignalDeclaration:(id)arg1 returnType:(id)arg2 parameters:(id)arg3 methodSelector:(id)arg4 attributes:(id)arg5 ;
-(void)addMethodDeclaration:(id)arg1 returnType:(id)arg2 parameters:(id)arg3 methodSelector:(id)arg4 attributes:(id)arg5 ;
-(void)addConstructorDeclaration:(id)arg1 parameters:(id)arg2 methodSelector:(id)arg3 ;
-(TMLValueExpression *)initializer;
-(NSDictionary *)signalHandlers;
-(void)applyCategory:(id)arg1 ;
-(id)propertyDeclaration:(id)arg1 ;
@end

