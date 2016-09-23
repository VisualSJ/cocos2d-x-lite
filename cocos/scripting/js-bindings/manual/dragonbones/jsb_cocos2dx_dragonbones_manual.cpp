/*
 * Copyright (c) 2016 Chukong Technologies Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include "scripting/js-bindings/manual/dragonbones/jsb_cocos2dx_dragonbones_manual.h"
#include "scripting/js-bindings/manual/ScriptingCore.h"
#include "scripting/js-bindings/manual/cocos2d_specifics.hpp"
#include "editor-support/dragonbones/cocos2dx/CCDragonBonesHeaders.h"

using namespace dragonBones;

bool js_cocos2dx_dragonbones_Armature_getAnimation(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    dragonBones::Armature* cobj = (dragonBones::Armature *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_cocos2dx_dragonbones_Armature_getAnimation : Invalid Native Object");
    if (argc == 0) {
        dragonBones::Animation& ret = cobj->getAnimation();
        JS::RootedValue jsret(cx, OBJECT_TO_JSVAL(js_get_or_create_jsobject<dragonBones::Animation>(cx, (dragonBones::Animation*)&ret)));
        args.rval().set(jsret);
        return true;
    }
    
    JS_ReportError(cx, "js_cocos2dx_dragonbones_Armature_getAnimation : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}

bool js_cocos2dx_dragonbones_Armature_getDisplay(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    dragonBones::Armature* cobj = (dragonBones::Armature *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_cocos2dx_dragonbones_Armature_getDisplay : Invalid Native Object");
    if (argc == 0) {
        dragonBones::CCArmatureDisplay* ret = dynamic_cast<CCArmatureDisplay*>(cobj->getDisplay());
        JS::RootedValue jsret(cx);
        if (ret) {
            jsret = OBJECT_TO_JSVAL(js_get_or_create_jsobject<dragonBones::CCArmatureDisplay>(cx, ret));
        } else {
            jsret = JSVAL_NULL;
        };
        args.rval().set(jsret);
        return true;
    }
    
    JS_ReportError(cx, "js_cocos2dx_dragonbones_Armature_getDisplay : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}

bool js_cocos2dx_dragonbones_CCArmatureDisplay_getAnimation(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    dragonBones::CCArmatureDisplay* cobj = (dragonBones::CCArmatureDisplay *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_cocos2dx_dragonbones_Armature_getAnimation : Invalid Native Object");
    if (argc == 0) {
        dragonBones::Animation& ret = cobj->getAnimation();
        JS::RootedValue jsret(cx, OBJECT_TO_JSVAL(js_get_or_create_jsobject<dragonBones::Animation>(cx, (dragonBones::Animation*)&ret)));
        args.rval().set(jsret);
        return true;
    }
    
    JS_ReportError(cx, "js_cocos2dx_dragonbones_CCArmatureDisplay_getAnimation : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}

bool js_cocos2dx_dragonbones_AnimationState_getClip(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    dragonBones::AnimationState* cobj = (dragonBones::AnimationState *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_cocos2dx_dragonbones_AnimationState_getClip : Invalid Native Object");
    if (argc == 0) {
        const dragonBones::AnimationData& ret = cobj->getClip();
        JS::RootedValue jsret(cx, OBJECT_TO_JSVAL(js_get_or_create_jsobject<dragonBones::AnimationData>(cx, (dragonBones::AnimationData*)&ret)));
        args.rval().set(jsret);
        return true;
    }
    
    JS_ReportError(cx, "js_cocos2dx_dragonbones_AnimationState_getClip : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}

bool js_cocos2dx_dragonbones_WorldClock_getClock(JSContext *cx, JS::HandleObject obj, JS::HandleId id, JS::MutableHandleValue vp)
{
    JS::RootedValue jsret(cx, OBJECT_TO_JSVAL(js_get_or_create_jsobject<dragonBones::WorldClock>(cx, &dragonBones::WorldClock::clock)));
    vp.set(jsret);
    return true;
}

bool js_cocos2dx_dragonbones_TransformObject_getGlobal(JSContext *cx, JS::HandleObject obj, JS::HandleId id, JS::MutableHandleValue vp)
{
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    dragonBones::TransformObject* cobj = (dragonBones::TransformObject *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_cocos2dx_dragonbones_TransformObject_getGlobal : Invalid Native Object");
    JS::RootedValue jsret(cx, OBJECT_TO_JSVAL(js_get_or_create_jsobject<dragonBones::Transform>(cx, &cobj->global)));
    vp.set(jsret);
    return true;
}

bool js_cocos2dx_dragonbones_TransformObject_getOrigin(JSContext *cx, JS::HandleObject obj, JS::HandleId id, JS::MutableHandleValue vp)
{
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    dragonBones::TransformObject* cobj = (dragonBones::TransformObject *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_cocos2dx_dragonbones_TransformObject_getOrigin : Invalid Native Object");
    JS::RootedValue jsret(cx, OBJECT_TO_JSVAL(js_get_or_create_jsobject<dragonBones::Transform>(cx, &cobj->origin)));
    vp.set(jsret);
    return true;
}

bool js_cocos2dx_dragonbones_TransformObject_getOffset(JSContext *cx, JS::HandleObject obj, JS::HandleId id, JS::MutableHandleValue vp)
{
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    dragonBones::TransformObject* cobj = (dragonBones::TransformObject *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_cocos2dx_dragonbones_TransformObject_getOffset : Invalid Native Object");
    JS::RootedValue jsret(cx, OBJECT_TO_JSVAL(js_get_or_create_jsobject<dragonBones::Transform>(cx, &cobj->offset)));
    vp.set(jsret);
    return true;
}

extern JSObject *jsb_dragonBones_Armature_prototype;
extern JSObject *jsb_dragonBones_CCArmatureDisplay_prototype;
extern JSObject *jsb_dragonBones_AnimationState_prototype;
extern JSObject *jsb_dragonBones_TransformObject_prototype;

void register_all_cocos2dx_dragonbones_manual(JSContext* cx, JS::HandleObject global)
{
    JS::RootedObject armature(cx, jsb_dragonBones_Armature_prototype);
    JS_DefineFunction(cx, armature, "getAnimation", js_cocos2dx_dragonbones_Armature_getAnimation, 0, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    JS_DefineFunction(cx, armature, "getDisplay", js_cocos2dx_dragonbones_Armature_getDisplay, 0, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    
    JS::RootedObject armatureDisplay(cx, jsb_dragonBones_CCArmatureDisplay_prototype);
    JS_DefineFunction(cx, armatureDisplay, "getAnimation", js_cocos2dx_dragonbones_CCArmatureDisplay_getAnimation, 0, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    
    JS::RootedObject animationState(cx, jsb_dragonBones_AnimationState_prototype);
    JS_DefineFunction(cx, animationState, "getClip", js_cocos2dx_dragonbones_AnimationState_getClip, 0, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    
    JS::RootedObject tmpObj(cx);
    get_or_create_js_obj(cx, global, "dragonBones", &tmpObj);
    get_or_create_js_obj(cx, tmpObj, "WorldClock", &tmpObj);
    JS_DefineProperty(cx, tmpObj, "clock", JS::UndefinedHandleValue, JSPROP_ENUMERATE | JSPROP_PERMANENT, js_cocos2dx_dragonbones_WorldClock_getClock);
    
    JS::RootedObject transformObject(cx, jsb_dragonBones_TransformObject_prototype);
    JS_DefineProperty(cx, transformObject, "global", JS::UndefinedHandleValue, JSPROP_ENUMERATE | JSPROP_PERMANENT, js_cocos2dx_dragonbones_TransformObject_getGlobal);
    JS_DefineProperty(cx, transformObject, "origin", JS::UndefinedHandleValue, JSPROP_ENUMERATE | JSPROP_PERMANENT, js_cocos2dx_dragonbones_TransformObject_getOrigin);
    JS_DefineProperty(cx, transformObject, "offset", JS::UndefinedHandleValue, JSPROP_ENUMERATE | JSPROP_PERMANENT, js_cocos2dx_dragonbones_TransformObject_getOffset);
}
