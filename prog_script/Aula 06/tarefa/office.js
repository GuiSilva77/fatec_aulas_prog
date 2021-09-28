var oteljs = (function (t) {
  var e = {};
  function n(r) {
    if (e[r]) return e[r].exports;
    var i = (e[r] = { i: r, l: !1, exports: {} });
    return t[r].call(i.exports, i, i.exports, n), (i.l = !0), i.exports;
  }
  return (
    (n.m = t),
    (n.c = e),
    (n.d = function (t, e, r) {
      n.o(t, e) || Object.defineProperty(t, e, { enumerable: !0, get: r });
    }),
    (n.r = function (t) {
      "undefined" != typeof Symbol &&
        Symbol.toStringTag &&
        Object.defineProperty(t, Symbol.toStringTag, { value: "Module" }),
        Object.defineProperty(t, "__esModule", { value: !0 });
    }),
    (n.t = function (t, e) {
      if ((1 & e && (t = n(t)), 8 & e)) return t;
      if (4 & e && "object" == typeof t && t && t.__esModule) return t;
      var r = Object.create(null);
      if (
        (n.r(r),
        Object.defineProperty(r, "default", { enumerable: !0, value: t }),
        2 & e && "string" != typeof t)
      )
        for (var i in t)
          n.d(
            r,
            i,
            function (e) {
              return t[e];
            }.bind(null, i)
          );
      return r;
    }),
    (n.n = function (t) {
      var e =
        t && t.__esModule
          ? function () {
              return t.default;
            }
          : function () {
              return t;
            };
      return n.d(e, "a", e), e;
    }),
    (n.o = function (t, e) {
      return Object.prototype.hasOwnProperty.call(t, e);
    }),
    (n.p = ""),
    n((n.s = 19))
  );
})([
  function (t, e, n) {
    "use strict";
    n.d(e, "a", function () {
      return o;
    }),
      n.d(e, "d", function () {
        return a;
      }),
      n.d(e, "b", function () {
        return c;
      }),
      n.d(e, "e", function () {
        return s;
      }),
      n.d(e, "c", function () {
        return u;
      });
    var r = n(3),
      i = n(4);
    function o(t, e) {
      return {
        name: t,
        dataType: r.a.Boolean,
        value: e,
        classification: i.a.SystemMetadata,
      };
    }
    function a(t, e) {
      return {
        name: t,
        dataType: r.a.Int64,
        value: e,
        classification: i.a.SystemMetadata,
      };
    }
    function c(t, e) {
      return {
        name: t,
        dataType: r.a.Double,
        value: e,
        classification: i.a.SystemMetadata,
      };
    }
    function s(t, e) {
      return {
        name: t,
        dataType: r.a.String,
        value: e,
        classification: i.a.SystemMetadata,
      };
    }
    function u(t, e) {
      return {
        name: t,
        dataType: r.a.Guid,
        value: e,
        classification: i.a.SystemMetadata,
      };
    }
  },
  function (t, e, n) {
    "use strict";
    n.d(e, "b", function () {
      return r;
    }),
      n.d(e, "a", function () {
        return i;
      }),
      n.d(e, "e", function () {
        return a;
      }),
      n.d(e, "d", function () {
        return c;
      }),
      n.d(e, "c", function () {
        return s;
      });
    var r,
      i,
      o = new (n(10).a)();
    function a() {
      return o;
    }
    function c(t, e, n) {
      o.fireEvent({ level: t, category: e, message: n });
    }
    function s(t, e, n) {
      c(r.Error, t, function () {
        var t = n instanceof Error ? n.message : "";
        return e + ": " + t;
      });
    }
    !(function (t) {
      (t[(t.Error = 0)] = "Error"),
        (t[(t.Warning = 1)] = "Warning"),
        (t[(t.Info = 2)] = "Info"),
        (t[(t.Verbose = 3)] = "Verbose");
    })(r || (r = {})),
      (function (t) {
        (t[(t.Core = 0)] = "Core"),
          (t[(t.Sink = 1)] = "Sink"),
          (t[(t.Transport = 2)] = "Transport");
      })(i || (i = {}));
  },
  function (t, e, n) {
    "use strict";
    n.d(e, "a", function () {
      return i;
    });
    var r = n(0);
    function i(t, e, n) {
      t.push(Object(r.e)("zC." + e, n));
    }
  },
  function (t, e, n) {
    "use strict";
    var r;
    n.d(e, "a", function () {
      return r;
    }),
      (function (t) {
        (t[(t.String = 0)] = "String"),
          (t[(t.Boolean = 1)] = "Boolean"),
          (t[(t.Int64 = 2)] = "Int64"),
          (t[(t.Double = 3)] = "Double"),
          (t[(t.Guid = 4)] = "Guid");
      })(r || (r = {}));
  },
  function (t, e, n) {
    "use strict";
    var r;
    n.d(e, "a", function () {
      return r;
    }),
      (function (t) {
        (t[(t.EssentialServiceMetadata = 1)] = "EssentialServiceMetadata"),
          (t[(t.AccountData = 2)] = "AccountData"),
          (t[(t.SystemMetadata = 4)] = "SystemMetadata"),
          (t[(t.OrganizationIdentifiableInformation = 8)] =
            "OrganizationIdentifiableInformation"),
          (t[(t.EndUserIdentifiableInformation = 16)] =
            "EndUserIdentifiableInformation"),
          (t[(t.CustomerContent = 32)] = "CustomerContent"),
          (t[(t.AccessControl = 64)] = "AccessControl");
      })(r || (r = {}));
  },
  function (t, e, n) {
    "use strict";
    var r, i, o, a, c;
    n.d(e, "e", function () {
      return r;
    }),
      n.d(e, "d", function () {
        return i;
      }),
      n.d(e, "a", function () {
        return o;
      }),
      n.d(e, "b", function () {
        return a;
      }),
      n.d(e, "c", function () {
        return c;
      }),
      (function (t) {
        (t[(t.NotSet = 0)] = "NotSet"),
          (t[(t.Measure = 1)] = "Measure"),
          (t[(t.Diagnostics = 2)] = "Diagnostics"),
          (t[(t.CriticalBusinessImpact = 191)] = "CriticalBusinessImpact"),
          (t[(t.CriticalCensus = 192)] = "CriticalCensus"),
          (t[(t.CriticalExperimentation = 193)] = "CriticalExperimentation"),
          (t[(t.CriticalUsage = 194)] = "CriticalUsage");
      })(r || (r = {})),
      (function (t) {
        (t[(t.NotSet = 0)] = "NotSet"),
          (t[(t.Normal = 1)] = "Normal"),
          (t[(t.High = 2)] = "High");
      })(i || (i = {})),
      (function (t) {
        (t[(t.NotSet = 0)] = "NotSet"),
          (t[(t.Normal = 1)] = "Normal"),
          (t[(t.High = 2)] = "High");
      })(o || (o = {})),
      (function (t) {
        (t[(t.NotSet = 0)] = "NotSet"),
          (t[(t.SoftwareSetup = 1)] = "SoftwareSetup"),
          (t[(t.ProductServiceUsage = 2)] = "ProductServiceUsage"),
          (t[(t.ProductServicePerformance = 4)] = "ProductServicePerformance"),
          (t[(t.DeviceConfiguration = 8)] = "DeviceConfiguration"),
          (t[(t.InkingTypingSpeech = 16)] = "InkingTypingSpeech");
      })(a || (a = {})),
      (function (t) {
        (t[(t.ReservedDoNotUse = 0)] = "ReservedDoNotUse"),
          (t[(t.BasicEvent = 10)] = "BasicEvent"),
          (t[(t.FullEvent = 100)] = "FullEvent"),
          (t[(t.NecessaryServiceDataEvent = 110)] =
            "NecessaryServiceDataEvent"),
          (t[(t.AlwaysOnNecessaryServiceDataEvent = 120)] =
            "AlwaysOnNecessaryServiceDataEvent");
      })(c || (c = {}));
  },
  function (t, e, n) {
    "use strict";
    n.d(e, "a", function () {
      return p;
    });
    var r,
      i,
      o,
      a,
      c,
      s,
      u,
      d,
      f,
      l = n(0),
      v = n(2);
    ((r || (r = {})).getFields = function (t, e) {
      var n = [];
      return (
        n.push(Object(l.d)(t + ".Code", e.code)),
        void 0 !== e.type && n.push(Object(l.e)(t + ".Type", e.type)),
        void 0 !== e.tag && n.push(Object(l.d)(t + ".Tag", e.tag)),
        void 0 !== e.isExpected &&
          n.push(Object(l.a)(t + ".IsExpected", e.isExpected)),
        Object(v.a)(n, t, "Office.System.Result"),
        n
      );
    }),
      ((o = i || (i = {})).contractName = "Office.System.Activity"),
      (o.getFields = function (t) {
        var e = [];
        return (
          void 0 !== t.cV && e.push(Object(l.e)("Activity.CV", t.cV)),
          e.push(Object(l.d)("Activity.Duration", t.duration)),
          e.push(Object(l.d)("Activity.Count", t.count)),
          e.push(Object(l.d)("Activity.AggMode", t.aggMode)),
          void 0 !== t.success &&
            e.push(Object(l.a)("Activity.Success", t.success)),
          void 0 !== t.result &&
            e.push.apply(e, r.getFields("Activity.Result", t.result)),
          Object(v.a)(e, "Activity", o.contractName),
          e
        );
      }),
      ((a || (a = {})).getFields = function (t, e) {
        var n = [];
        return (
          void 0 !== e.id && n.push(Object(l.e)(t + ".Id", e.id)),
          void 0 !== e.version &&
            n.push(Object(l.e)(t + ".Version", e.version)),
          void 0 !== e.sessionId &&
            n.push(Object(l.e)(t + ".SessionId", e.sessionId)),
          Object(v.a)(n, t, "Office.System.Host"),
          n
        );
      }),
      ((c || (c = {})).getFields = function (t, e) {
        var n = [];
        return (
          void 0 !== e.alias && n.push(Object(l.e)(t + ".Alias", e.alias)),
          void 0 !== e.primaryIdentityHash &&
            n.push(
              Object(l.e)(t + ".PrimaryIdentityHash", e.primaryIdentityHash)
            ),
          void 0 !== e.primaryIdentitySpace &&
            n.push(
              Object(l.e)(t + ".PrimaryIdentitySpace", e.primaryIdentitySpace)
            ),
          void 0 !== e.tenantId &&
            n.push(Object(l.e)(t + ".TenantId", e.tenantId)),
          void 0 !== e.tenantGroup &&
            n.push(Object(l.e)(t + ".TenantGroup", e.tenantGroup)),
          void 0 !== e.isAnonymous &&
            n.push(Object(l.a)(t + ".IsAnonymous", e.isAnonymous)),
          Object(v.a)(n, t, "Office.System.User"),
          n
        );
      }),
      ((s || (s = {})).getFields = function (t, e) {
        var n = [];
        return (
          void 0 !== e.id && n.push(Object(l.e)(t + ".Id", e.id)),
          void 0 !== e.version &&
            n.push(Object(l.e)(t + ".Version", e.version)),
          void 0 !== e.instanceId &&
            n.push(Object(l.e)(t + ".InstanceId", e.instanceId)),
          void 0 !== e.name && n.push(Object(l.e)(t + ".Name", e.name)),
          void 0 !== e.marketplaceType &&
            n.push(Object(l.e)(t + ".MarketplaceType", e.marketplaceType)),
          void 0 !== e.sessionId &&
            n.push(Object(l.e)(t + ".SessionId", e.sessionId)),
          void 0 !== e.browserToken &&
            n.push(Object(l.e)(t + ".BrowserToken", e.browserToken)),
          void 0 !== e.osfRuntimeVersion &&
            n.push(Object(l.e)(t + ".OsfRuntimeVersion", e.osfRuntimeVersion)),
          void 0 !== e.officeJsVersion &&
            n.push(Object(l.e)(t + ".OfficeJsVersion", e.officeJsVersion)),
          void 0 !== e.hostJsVersion &&
            n.push(Object(l.e)(t + ".HostJsVersion", e.hostJsVersion)),
          void 0 !== e.assetId &&
            n.push(Object(l.e)(t + ".AssetId", e.assetId)),
          void 0 !== e.providerName &&
            n.push(Object(l.e)(t + ".ProviderName", e.providerName)),
          void 0 !== e.type && n.push(Object(l.e)(t + ".Type", e.type)),
          Object(v.a)(n, t, "Office.System.SDX"),
          n
        );
      }),
      ((u || (u = {})).getFields = function (t, e) {
        var n = [];
        return (
          void 0 !== e.name && n.push(Object(l.e)(t + ".Name", e.name)),
          void 0 !== e.state && n.push(Object(l.e)(t + ".State", e.state)),
          Object(v.a)(n, t, "Office.System.Funnel"),
          n
        );
      }),
      ((d || (d = {})).getFields = function (t, e) {
        var n = [];
        return (
          void 0 !== e.id && n.push(Object(l.d)(t + ".Id", e.id)),
          void 0 !== e.name && n.push(Object(l.e)(t + ".Name", e.name)),
          void 0 !== e.commandSurface &&
            n.push(Object(l.e)(t + ".CommandSurface", e.commandSurface)),
          void 0 !== e.parentName &&
            n.push(Object(l.e)(t + ".ParentName", e.parentName)),
          void 0 !== e.triggerMethod &&
            n.push(Object(l.e)(t + ".TriggerMethod", e.triggerMethod)),
          void 0 !== e.timeOffsetMs &&
            n.push(Object(l.d)(t + ".TimeOffsetMs", e.timeOffsetMs)),
          Object(v.a)(n, t, "Office.System.UserAction"),
          n
        );
      }),
      (function (t) {
        t.getFields = function (t, e) {
          var n = [];
          return (
            n.push(Object(l.e)(t + ".ErrorGroup", e.errorGroup)),
            n.push(Object(l.d)(t + ".Tag", e.tag)),
            void 0 !== e.code && n.push(Object(l.d)(t + ".Code", e.code)),
            void 0 !== e.id && n.push(Object(l.d)(t + ".Id", e.id)),
            void 0 !== e.count && n.push(Object(l.d)(t + ".Count", e.count)),
            Object(v.a)(n, t, "Office.System.Error"),
            n
          );
        };
      })(f || (f = {}));
    var p,
      y = i,
      h = r,
      g = f,
      m = u,
      b = a,
      F = s,
      O = d,
      S = c;
    !(function (t) {
      !(function (t) {
        !(function (t) {
          (t.Activity = y),
            (t.Result = h),
            (t.Error = g),
            (t.Funnel = m),
            (t.Host = b),
            (t.SDX = F),
            (t.User = S),
            (t.UserAction = O);
        })(t.System || (t.System = {}));
      })(t.Office || (t.Office = {}));
    })(p || (p = {}));
  },
  function (t, e, n) {
    "use strict";
    function r(t) {
      var e = { eventName: t.eventName, eventFlags: t.eventFlags };
      return (
        t.telemetryProperties &&
          (e.telemetryProperties = {
            ariaTenantToken: t.telemetryProperties.ariaTenantToken,
            nexusTenantToken: t.telemetryProperties.nexusTenantToken,
          }),
        t.eventContract &&
          (e.eventContract = {
            name: t.eventContract.name,
            dataFields: t.eventContract.dataFields.slice(),
          }),
        (e.dataFields = t.dataFields ? t.dataFields.slice() : []),
        e
      );
    }
    n.d(e, "a", function () {
      return r;
    });
  },
  function (t, e, n) {
    "use strict";
    n.d(e, "b", function () {
      return l;
    }),
      n.d(e, "a", function () {
        return v;
      });
    var r,
      i,
      o = n(7),
      a = n(1);
    !(function (t) {
      (t[(t.Aria = 0)] = "Aria"), (t[(t.Nexus = 1)] = "Nexus");
    })(r || (r = {})),
      (function (t) {
        var e = {},
          n = {},
          i = {};
        function o(t) {
          if ("object" != typeof t)
            throw new Error("tokenTree must be an object");
          i = (function t(e, n) {
            if ("object" != typeof n) return n;
            for (var r = 0, i = Object.keys(n); r < i.length; r++) {
              var o = i[r];
              o in e && (e[o], 1) ? (e[o] = t(e[o], n[o])) : (e[o] = n[o]);
            }
            return e;
          })(i, t);
        }
        function c(t) {
          if (e[t]) return e[t];
          var n = u(t, r.Aria);
          return "string" == typeof n ? ((e[t] = n), n) : void 0;
        }
        function s(t) {
          if (n[t]) return n[t];
          var e = u(t, r.Nexus);
          return "number" == typeof e ? ((n[t] = e), e) : void 0;
        }
        function u(t, e) {
          var n = t.split("."),
            o = i,
            a = void 0;
          if (o) {
            for (var c = 0; c < n.length - 1; c++)
              o[n[c]] &&
                ((o = o[n[c]]),
                e === r.Aria && "string" == typeof o.ariaTenantToken
                  ? (a = o.ariaTenantToken)
                  : e === r.Nexus &&
                    "number" == typeof o.nexusTenantToken &&
                    (a = o.nexusTenantToken));
            return a;
          }
        }
        (t.setTenantToken = function (t, e, n) {
          var r = t.split(".");
          if (r.length < 2 || "Office" !== r[0])
            Object(a.d)(a.b.Error, a.a.Core, function () {
              return "Invalid namespace: " + t;
            });
          else {
            var i = Object.create(Object.prototype);
            e && (i.ariaTenantToken = e), n && (i.nexusTenantToken = n);
            var c,
              s = i;
            for (c = r.length - 1; c >= 0; --c) {
              var u = Object.create(Object.prototype);
              (u[r[c]] = s), (s = u);
            }
            o(s);
          }
        }),
          (t.setTenantTokens = o),
          (t.getTenantTokens = function (t) {
            var e = c(t),
              n = s(t);
            if (!n || !e)
              throw new Error("Could not find tenant token for " + t);
            return { ariaTenantToken: e, nexusTenantToken: n };
          }),
          (t.getAriaTenantToken = c),
          (t.getNexusTenantToken = s),
          (t.clear = function () {
            (e = {}), (n = {}), (i = {});
          });
      })(i || (i = {}));
    var c,
      s = n(3);
    !(function (t) {
      var e = /^[A-Z][a-zA-Z0-9]*$/,
        n = /^[a-zA-Z0-9_\.]*$/;
      function r(t) {
        return void 0 !== t && n.test(t);
      }
      function i(t) {
        if (!((e = t.name) && r(e) && e.length + 5 < 100))
          throw new Error("Invalid dataField name");
        var e;
        t.dataType === s.a.Int64 && o(t.value);
      }
      function o(t) {
        if (
          "number" != typeof t ||
          !isFinite(t) ||
          Math.floor(t) !== t ||
          t < -9007199254740991 ||
          t > 9007199254740991
        )
          throw new Error("Invalid integer " + JSON.stringify(t));
      }
      (t.validateTelemetryEvent = function (t) {
        if (
          !(function (t) {
            if (!t || t.length > 98) return !1;
            var n = t.split("."),
              r = n[n.length - 1];
            return (
              (function (t) {
                return !!t && t.length >= 3 && "Office" === t[0];
              })(n) && ((i = r), void 0 !== i && e.test(i))
            );
            var i;
          })(t.eventName)
        )
          throw new Error("Invalid eventName");
        if (t.eventContract && !r(t.eventContract.name))
          throw new Error("Invalid eventContract");
        if (null != t.dataFields)
          for (var n = 0; n < t.dataFields.length; n++) i(t.dataFields[n]);
      }),
        (t.validateInt = o);
    })(c || (c = {}));
    var u = n(10),
      d = n(0),
      f = function () {
        return (f =
          Object.assign ||
          function (t) {
            for (var e, n = 1, r = arguments.length; n < r; n++)
              for (var i in (e = arguments[n]))
                Object.prototype.hasOwnProperty.call(e, i) && (t[i] = e[i]);
            return t;
          }).apply(this, arguments);
      },
      l = -1,
      v = (function () {
        function t(t, e, n) {
          var r, i;
          (this.onSendEvent = new u.a()),
            (this.persistentDataFields = []),
            (this.config = n || {}),
            t &&
              ((this.onSendEvent = t.onSendEvent),
              (r = this.persistentDataFields).push.apply(
                r,
                t.persistentDataFields
              ),
              (this.config = f(f({}, t.getConfig()), this.config))),
            e && (i = this.persistentDataFields).push.apply(i, e);
        }
        return (
          (t.prototype.sendTelemetryEvent = function (t) {
            var e;
            try {
              if (0 === this.onSendEvent.getListenerCount())
                return void Object(a.d)(a.b.Warning, a.a.Core, function () {
                  return "No telemetry sinks are attached.";
                });
              (e = this.cloneEvent(t)), this.processTelemetryEvent(e);
            } catch (t) {
              return void Object(a.c)(a.a.Core, "SendTelemetryEvent", t);
            }
            try {
              this.onSendEvent.fireEvent(e);
            } catch (t) {}
          }),
          (t.prototype.processTelemetryEvent = function (t) {
            var e;
            t.telemetryProperties ||
              (t.telemetryProperties = i.getTenantTokens(t.eventName)),
              t.dataFields &&
                (t.dataFields.unshift(Object(d.e)("OTelJS.Version", "3.1.74")),
                this.persistentDataFields &&
                  (e = t.dataFields).unshift.apply(
                    e,
                    this.persistentDataFields
                  )),
              this.config.disableValidation || c.validateTelemetryEvent(t);
          }),
          (t.prototype.addSink = function (t) {
            this.onSendEvent.addListener(function (e) {
              return t.sendTelemetryEvent(e);
            });
          }),
          (t.prototype.setTenantToken = function (t, e, n) {
            i.setTenantToken(t, e, n);
          }),
          (t.prototype.setTenantTokens = function (t) {
            i.setTenantTokens(t);
          }),
          (t.prototype.cloneEvent = function (t) {
            return Object(o.a)(t);
          }),
          (t.prototype.getConfig = function () {
            return this.config;
          }),
          t
        );
      })();
  },
  function (t, e, n) {
    "use strict";
    var r;
    n.d(e, "a", function () {
      return s;
    }),
      (function (t) {
        var e,
          n = 0;
        (t.getNext = function () {
          return (
            void 0 === e &&
              (e = (function () {
                for (
                  var t =
                      "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/",
                    e = [],
                    n = 0;
                  n < 22;
                  n++
                )
                  e.push(t.charAt(Math.floor(Math.random() * t.length)));
                return e.join("");
              })()),
            new r(e, ++n)
          );
        }),
          (t.getNextChild = function (t) {
            return new r(t.getString(), ++t.nextChild);
          });
        var r = (function () {
          function t(t, e) {
            (this.base = t), (this.id = e), (this.nextChild = 0);
          }
          return (
            (t.prototype.getString = function () {
              return this.base + "." + this.id;
            }),
            t
          );
        })();
        t.CV = r;
      })(r || (r = {}));
    var i = n(1),
      o = function (t, e, n, r) {
        return new (n || (n = Promise))(function (i, o) {
          function a(t) {
            try {
              s(r.next(t));
            } catch (t) {
              o(t);
            }
          }
          function c(t) {
            try {
              s(r.throw(t));
            } catch (t) {
              o(t);
            }
          }
          function s(t) {
            var e;
            t.done
              ? i(t.value)
              : ((e = t.value),
                e instanceof n
                  ? e
                  : new n(function (t) {
                      t(e);
                    })).then(a, c);
          }
          s((r = r.apply(t, e || [])).next());
        });
      },
      a = function (t, e) {
        var n,
          r,
          i,
          o,
          a = {
            label: 0,
            sent: function () {
              if (1 & i[0]) throw i[1];
              return i[1];
            },
            trys: [],
            ops: [],
          };
        return (
          (o = { next: c(0), throw: c(1), return: c(2) }),
          "function" == typeof Symbol &&
            (o[Symbol.iterator] = function () {
              return this;
            }),
          o
        );
        function c(o) {
          return function (c) {
            return (function (o) {
              if (n) throw new TypeError("Generator is already executing.");
              for (; a; )
                try {
                  if (
                    ((n = 1),
                    r &&
                      (i =
                        2 & o[0]
                          ? r.return
                          : o[0]
                          ? r.throw || ((i = r.return) && i.call(r), 0)
                          : r.next) &&
                      !(i = i.call(r, o[1])).done)
                  )
                    return i;
                  switch (((r = 0), i && (o = [2 & o[0], i.value]), o[0])) {
                    case 0:
                    case 1:
                      i = o;
                      break;
                    case 4:
                      return a.label++, { value: o[1], done: !1 };
                    case 5:
                      a.label++, (r = o[1]), (o = [0]);
                      continue;
                    case 7:
                      (o = a.ops.pop()), a.trys.pop();
                      continue;
                    default:
                      if (
                        !((i = a.trys),
                        (i = i.length > 0 && i[i.length - 1]) ||
                          (6 !== o[0] && 2 !== o[0]))
                      ) {
                        a = 0;
                        continue;
                      }
                      if (3 === o[0] && (!i || (o[1] > i[0] && o[1] < i[3]))) {
                        a.label = o[1];
                        break;
                      }
                      if (6 === o[0] && a.label < i[1]) {
                        (a.label = i[1]), (i = o);
                        break;
                      }
                      if (i && a.label < i[2]) {
                        (a.label = i[2]), a.ops.push(o);
                        break;
                      }
                      i[2] && a.ops.pop(), a.trys.pop();
                      continue;
                  }
                  o = e.call(t, a);
                } catch (t) {
                  (o = [6, t]), (r = 0);
                } finally {
                  n = i = 0;
                }
              if (5 & o[0]) throw o[1];
              return { value: o[0] ? o[1] : void 0, done: !0 };
            })([o, c]);
          };
        }
      },
      c = function () {
        return 1e3 * Date.now();
      };
    "object" == typeof window &&
      "object" == typeof window.performance &&
      "now" in window.performance &&
      (c = function () {
        return 1e3 * Math.floor(window.performance.now());
      });
    var s = (function () {
      function t(t, e, n) {
        (this._optionalEventFlags = {}),
          (this._ended = !1),
          (this._telemetryLogger = t),
          (this._activityName = e),
          (this._cv = n ? r.getNextChild(n._cv) : r.getNext()),
          (this._dataFields = []),
          (this._success = void 0),
          (this._startTime = c());
      }
      return (
        (t.createNew = function (e, n) {
          return new t(e, n);
        }),
        (t.prototype.createChildActivity = function (e) {
          return new t(this._telemetryLogger, e, this);
        }),
        (t.prototype.setEventFlags = function (t) {
          this._optionalEventFlags = t;
        }),
        (t.prototype.addDataField = function (t) {
          this._dataFields.push(t);
        }),
        (t.prototype.addDataFields = function (t) {
          var e;
          (e = this._dataFields).push.apply(e, t);
        }),
        (t.prototype.setSuccess = function (t) {
          this._success = t;
        }),
        (t.prototype.setResult = function (t, e, n) {
          this._result = { code: t, type: e, tag: n };
        }),
        (t.prototype.endNow = function () {
          if (!this._ended) {
            void 0 === this._success &&
              void 0 === this._result &&
              Object(i.d)(i.b.Warning, i.a.Core, function () {
                return "Activity does not have success or result set";
              });
            var t = c() - this._startTime;
            this._ended = !0;
            var e = {
              duration: t,
              count: 1,
              aggMode: 0,
              cV: this._cv.getString(),
              success: this._success,
              result: this._result,
            };
            return this._telemetryLogger.sendActivity(
              this._activityName,
              e,
              this._dataFields,
              this._optionalEventFlags
            );
          }
          Object(i.d)(i.b.Error, i.a.Core, function () {
            return "Activity has already ended";
          });
        }),
        (t.prototype.executeAsync = function (t) {
          return o(this, void 0, void 0, function () {
            var e = this;
            return a(this, function (n) {
              return [
                2,
                t(this)
                  .then(function (t) {
                    return e.endNow(), t;
                  })
                  .catch(function (t) {
                    throw (e.endNow(), t);
                  }),
              ];
            });
          });
        }),
        (t.prototype.executeSync = function (t) {
          try {
            var e = t(this);
            return this.endNow(), e;
          } catch (t) {
            throw (this.endNow(), t);
          }
        }),
        (t.prototype.executeChildActivityAsync = function (t, e) {
          return o(this, void 0, void 0, function () {
            return a(this, function (n) {
              return [2, this.createChildActivity(t).executeAsync(e)];
            });
          });
        }),
        (t.prototype.executeChildActivitySync = function (t, e) {
          return this.createChildActivity(t).executeSync(e);
        }),
        t
      );
    })();
  },
  function (t, e, n) {
    "use strict";
    n.d(e, "a", function () {
      return r;
    });
    var r = (function () {
      function t() {
        this._listeners = [];
      }
      return (
        (t.prototype.fireEvent = function (t) {
          this._listeners.forEach(function (e) {
            return e(t);
          });
        }),
        (t.prototype.addListener = function (t) {
          t && this._listeners.push(t);
        }),
        (t.prototype.removeListener = function (t) {
          this._listeners = this._listeners.filter(function (e) {
            return e !== t;
          });
        }),
        (t.prototype.getListenerCount = function () {
          return this._listeners.length;
        }),
        t
      );
    })();
  },
  function (t, e, n) {
    "use strict";
    n.r(e);
    var r = n(6);
    n.d(e, "Contracts", function () {
      return r.a;
    });
    var i = n(9);
    n.d(e, "ActivityScope", function () {
      return i.a;
    });
    var o = n(2);
    n.d(e, "addContractField", function () {
      return o.a;
    });
    var a = n(12);
    n.d(e, "getFieldsForContract", function () {
      return a.a;
    });
    var c = n(4);
    n.d(e, "DataClassification", function () {
      return c.a;
    });
    var s = n(13);
    for (var u in s)
      [
        "default",
        "Contracts",
        "ActivityScope",
        "addContractField",
        "getFieldsForContract",
        "DataClassification",
      ].indexOf(u) < 0 &&
        (function (t) {
          n.d(e, t, function () {
            return s[t];
          });
        })(u);
    var d = n(0);
    n.d(e, "makeBooleanDataField", function () {
      return d.a;
    }),
      n.d(e, "makeInt64DataField", function () {
        return d.d;
      }),
      n.d(e, "makeDoubleDataField", function () {
        return d.b;
      }),
      n.d(e, "makeStringDataField", function () {
        return d.e;
      }),
      n.d(e, "makeGuidDataField", function () {
        return d.c;
      });
    var f = n(3);
    n.d(e, "DataFieldType", function () {
      return f.a;
    });
    var l = n(14);
    n.d(e, "getEffectiveEventFlags", function () {
      return l.a;
    });
    var v = n(5);
    n.d(e, "SamplingPolicy", function () {
      return v.e;
    }),
      n.d(e, "PersistencePriority", function () {
        return v.d;
      }),
      n.d(e, "CostPriority", function () {
        return v.a;
      }),
      n.d(e, "DataCategories", function () {
        return v.b;
      }),
      n.d(e, "DiagnosticLevel", function () {
        return v.c;
      });
    var p = n(15);
    for (var u in p)
      [
        "default",
        "Contracts",
        "ActivityScope",
        "addContractField",
        "getFieldsForContract",
        "DataClassification",
        "makeBooleanDataField",
        "makeInt64DataField",
        "makeDoubleDataField",
        "makeStringDataField",
        "makeGuidDataField",
        "DataFieldType",
        "getEffectiveEventFlags",
        "SamplingPolicy",
        "PersistencePriority",
        "CostPriority",
        "DataCategories",
        "DiagnosticLevel",
      ].indexOf(u) < 0 &&
        (function (t) {
          n.d(e, t, function () {
            return p[t];
          });
        })(u);
    var y = n(1);
    n.d(e, "LogLevel", function () {
      return y.b;
    }),
      n.d(e, "Category", function () {
        return y.a;
      }),
      n.d(e, "onNotification", function () {
        return y.e;
      }),
      n.d(e, "logNotification", function () {
        return y.d;
      }),
      n.d(e, "logError", function () {
        return y.c;
      });
    var h = n(8);
    n.d(e, "SuppressNexus", function () {
      return h.b;
    }),
      n.d(e, "SimpleTelemetryLogger", function () {
        return h.a;
      });
    var g = n(16);
    n.d(e, "TelemetryLogger", function () {
      return g.a;
    });
    var m = n(7);
    n.d(e, "cloneEvent", function () {
      return m.a;
    });
    var b = n(17);
    for (var u in b)
      [
        "default",
        "Contracts",
        "ActivityScope",
        "addContractField",
        "getFieldsForContract",
        "DataClassification",
        "makeBooleanDataField",
        "makeInt64DataField",
        "makeDoubleDataField",
        "makeStringDataField",
        "makeGuidDataField",
        "DataFieldType",
        "getEffectiveEventFlags",
        "SamplingPolicy",
        "PersistencePriority",
        "CostPriority",
        "DataCategories",
        "DiagnosticLevel",
        "LogLevel",
        "Category",
        "onNotification",
        "logNotification",
        "logError",
        "SuppressNexus",
        "SimpleTelemetryLogger",
        "TelemetryLogger",
        "cloneEvent",
      ].indexOf(u) < 0 &&
        (function (t) {
          n.d(e, t, function () {
            return b[t];
          });
        })(u);
    var F = n(18);
    for (var u in F)
      [
        "default",
        "Contracts",
        "ActivityScope",
        "addContractField",
        "getFieldsForContract",
        "DataClassification",
        "makeBooleanDataField",
        "makeInt64DataField",
        "makeDoubleDataField",
        "makeStringDataField",
        "makeGuidDataField",
        "DataFieldType",
        "getEffectiveEventFlags",
        "SamplingPolicy",
        "PersistencePriority",
        "CostPriority",
        "DataCategories",
        "DiagnosticLevel",
        "LogLevel",
        "Category",
        "onNotification",
        "logNotification",
        "logError",
        "SuppressNexus",
        "SimpleTelemetryLogger",
        "TelemetryLogger",
        "cloneEvent",
      ].indexOf(u) < 0 &&
        (function (t) {
          n.d(e, t, function () {
            return F[t];
          });
        })(u);
  },
  function (t, e, n) {
    "use strict";
    n.d(e, "a", function () {
      return i;
    });
    var r = n(2);
    function i(t, e, n) {
      var i = n.map(function (e) {
        return { name: t + "." + e.name, value: e.value, dataType: e.dataType };
      });
      return Object(r.a)(i, t, e), i;
    }
  },
  function (t, e) {},
  function (t, e, n) {
    "use strict";
    n.d(e, "a", function () {
      return o;
    });
    var r = n(5),
      i = n(1);
    function o(t) {
      var e = {
        costPriority: r.a.Normal,
        samplingPolicy: r.e.Measure,
        persistencePriority: r.d.Normal,
        dataCategories: r.b.NotSet,
        diagnosticLevel: r.c.FullEvent,
      };
      return (
        (t.eventFlags && t.eventFlags.dataCategories) ||
          Object(i.d)(i.b.Error, i.a.Core, function () {
            return "Event is missing DataCategories event flag";
          }),
        t.eventFlags
          ? (t.eventFlags.costPriority &&
              (e.costPriority = t.eventFlags.costPriority),
            t.eventFlags.samplingPolicy &&
              (e.samplingPolicy = t.eventFlags.samplingPolicy),
            t.eventFlags.persistencePriority &&
              (e.persistencePriority = t.eventFlags.persistencePriority),
            t.eventFlags.dataCategories &&
              (e.dataCategories = t.eventFlags.dataCategories),
            t.eventFlags.diagnosticLevel &&
              (e.diagnosticLevel = t.eventFlags.diagnosticLevel),
            e)
          : e
      );
    }
  },
  function (t, e) {},
  function (t, e, n) {
    "use strict";
    n.d(e, "a", function () {
      return d;
    });
    var r,
      i = n(8),
      o = n(9),
      a = n(6),
      c =
        ((r = function (t, e) {
          return (r =
            Object.setPrototypeOf ||
            ({ __proto__: [] } instanceof Array &&
              function (t, e) {
                t.__proto__ = e;
              }) ||
            function (t, e) {
              for (var n in e) e.hasOwnProperty(n) && (t[n] = e[n]);
            })(t, e);
        }),
        function (t, e) {
          function n() {
            this.constructor = t;
          }
          r(t, e),
            (t.prototype =
              null === e
                ? Object.create(e)
                : ((n.prototype = e.prototype), new n()));
        }),
      s = function (t, e, n, r) {
        return new (n || (n = Promise))(function (i, o) {
          function a(t) {
            try {
              s(r.next(t));
            } catch (t) {
              o(t);
            }
          }
          function c(t) {
            try {
              s(r.throw(t));
            } catch (t) {
              o(t);
            }
          }
          function s(t) {
            var e;
            t.done
              ? i(t.value)
              : ((e = t.value),
                e instanceof n
                  ? e
                  : new n(function (t) {
                      t(e);
                    })).then(a, c);
          }
          s((r = r.apply(t, e || [])).next());
        });
      },
      u = function (t, e) {
        var n,
          r,
          i,
          o,
          a = {
            label: 0,
            sent: function () {
              if (1 & i[0]) throw i[1];
              return i[1];
            },
            trys: [],
            ops: [],
          };
        return (
          (o = { next: c(0), throw: c(1), return: c(2) }),
          "function" == typeof Symbol &&
            (o[Symbol.iterator] = function () {
              return this;
            }),
          o
        );
        function c(o) {
          return function (c) {
            return (function (o) {
              if (n) throw new TypeError("Generator is already executing.");
              for (; a; )
                try {
                  if (
                    ((n = 1),
                    r &&
                      (i =
                        2 & o[0]
                          ? r.return
                          : o[0]
                          ? r.throw || ((i = r.return) && i.call(r), 0)
                          : r.next) &&
                      !(i = i.call(r, o[1])).done)
                  )
                    return i;
                  switch (((r = 0), i && (o = [2 & o[0], i.value]), o[0])) {
                    case 0:
                    case 1:
                      i = o;
                      break;
                    case 4:
                      return a.label++, { value: o[1], done: !1 };
                    case 5:
                      a.label++, (r = o[1]), (o = [0]);
                      continue;
                    case 7:
                      (o = a.ops.pop()), a.trys.pop();
                      continue;
                    default:
                      if (
                        !((i = a.trys),
                        (i = i.length > 0 && i[i.length - 1]) ||
                          (6 !== o[0] && 2 !== o[0]))
                      ) {
                        a = 0;
                        continue;
                      }
                      if (3 === o[0] && (!i || (o[1] > i[0] && o[1] < i[3]))) {
                        a.label = o[1];
                        break;
                      }
                      if (6 === o[0] && a.label < i[1]) {
                        (a.label = i[1]), (i = o);
                        break;
                      }
                      if (i && a.label < i[2]) {
                        (a.label = i[2]), a.ops.push(o);
                        break;
                      }
                      i[2] && a.ops.pop(), a.trys.pop();
                      continue;
                  }
                  o = e.call(t, a);
                } catch (t) {
                  (o = [6, t]), (r = 0);
                } finally {
                  n = i = 0;
                }
              if (5 & o[0]) throw o[1];
              return { value: o[0] ? o[1] : void 0, done: !0 };
            })([o, c]);
          };
        }
      },
      d = (function (t) {
        function e() {
          return (null !== t && t.apply(this, arguments)) || this;
        }
        return (
          c(e, t),
          (e.prototype.executeActivityAsync = function (t, e) {
            return s(this, void 0, void 0, function () {
              return u(this, function (n) {
                return [2, this.createNewActivity(t).executeAsync(e)];
              });
            });
          }),
          (e.prototype.executeActivitySync = function (t, e) {
            return this.createNewActivity(t).executeSync(e);
          }),
          (e.prototype.createNewActivity = function (t) {
            return o.a.createNew(this, t);
          }),
          (e.prototype.sendActivity = function (t, e, n, r) {
            return this.sendTelemetryEvent({
              eventName: t,
              eventContract: {
                name: a.a.Office.System.Activity.contractName,
                dataFields: a.a.Office.System.Activity.getFields(e),
              },
              dataFields: n,
              eventFlags: r,
            });
          }),
          (e.prototype.sendError = function (t) {
            var e = a.a.Office.System.Error.getFields("Error", t.error);
            return (
              null != t.dataFields && e.push.apply(e, t.dataFields),
              this.sendTelemetryEvent({
                eventName: t.eventName,
                dataFields: e,
                eventFlags: t.eventFlags,
              })
            );
          }),
          e
        );
      })(i.a);
  },
  function (t, e) {},
  function (t, e) {},
  function (t, e, n) {
    t.exports = n(11);
  },
]);
