/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SCNProgram, NSDictionary, NSArray, NSMutableArray;

@interface SCNShadableHelper : NSObject <NSSecureCoding> {

	id _owner;
	SCNProgram* _program;
	NSDictionary* _shaderModifiers;
	NSArray* _c3dShaderModifierCache;
	NSMutableArray* _argumentsNames;
	NSDictionary* _symbolToBinder;
	NSDictionary* _symbolToUnbinder;

}

@property (nonatomic,copy) NSDictionary * shaderModifiers; 
@property (nonatomic,retain) SCNProgram * program; 
@property (nonatomic,readonly) id owner; 
@property (nonatomic,readonly) NSArray * shaderModifiersArgumentsNames; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithOwner:(id)arg1 ;
-(id)owner;
-(BOOL)isOpaque;
-(void)_commonInit;
-(SCNProgram *)program;
-(void)setProgram:(SCNProgram *)arg1 ;
-(NSDictionary *)shaderModifiers;
-(const void*)__CFObject;
-(void)handleBindingOfSymbol:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(C3DFXTechniqueRef)_technique;
-(void)ownerWillDie;
-(void)setShaderModifiers:(NSDictionary *)arg1 ;
-(void)copyModifiersFrom:(id)arg1 ;
-(NSArray *)shaderModifiersArgumentsNames;
-(void)handleUnbindingOfSymbol:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_stopObservingProgram;
-(void)_programDidChange:(id)arg1 ;
-(void)_setC3DProgram;
-(void)_startObservingProgram;
-(void)_parseAndSetShaderModifier:(id)arg1 ;
-(id)shaderModifierCache;
-(void)_updateC3DProgramInputForSymbol:(id)arg1 ;
-(C3DFXGLSLProgramRef)_programFromPassAtIndex:(long long)arg1 ;
-(void)_updateC3DProgramInput:(C3DFXGLSLProgramRef)arg1 forSymbol:(id)arg2 ;
-(void)_updateAllC3DProgramInputs;
-(void)_setC3DProgramDelegate;
-(void)_customEncodingOfSCNShadableHelper:(id)arg1 ;
-(void)_customDecodingOfSCNShadableHelper:(id)arg1 ;
-(void)_didDecodeSCNShadableHelper:(id)arg1 ;
-(BOOL)_bindValueForSymbol:(id)arg1 atLocation:(unsigned)arg2 programID:(unsigned)arg3 node:(id)arg4 renderer:(id)arg5 ;
-(void)_unbindValueForSymbol:(id)arg1 atLocation:(unsigned)arg2 programID:(unsigned)arg3 node:(id)arg4 renderer:(id)arg5 ;
@end

